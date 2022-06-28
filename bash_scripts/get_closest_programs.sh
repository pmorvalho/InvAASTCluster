#!/usr/bin/env bash
#Title			: get_closest_programs.sh
#Usage			: bash get_closest_programs.sh [-a]
#Author			: pmorvalho
#Date			: September 10, 2021
#Description	        : For each incorrect submission of each IPA, gets the closest correct programs using Bag of Words models
#Notes			:
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

initial_dir=$(pwd)
data_dir="InvAASTCluster-results"
runsolver_dir="/home/pmorvalho/runsolver/src"
bows=()
dataset_dir="*"

if [[ $1 == "C-Pack-IPAs" || $1 == "itsp" ]]; then
  dataset_dir=$1
fi
if [[ $1 == "-a" ]]; then
  # gets all available bows
  for lab in $(find bows/correct_programs_clara_supports/*/lab*/ex* -maxdepth 0 -type d);
  do
    for b in $(find $lab/*.pickle.gz -maxdepth 0 -type f);
    do
      b_name=${b%.pickle.gz}
      b_name=$(echo $b_name | rev | cut -d '/' -f 1 | rev)
      bows+=("$b_name")
    done
    # we just need to check one exercise
    break
  done
else
  # only these bows parameters are going to be used
  # bows=("ast-ng3" "ast-invs-dp-ng3" "invs-dp-ng3" "syntax-ng3")
  bows=("invs-dp-ng3" "invs-sn-ng3" "invs-sn-dp-ng3" "ast-ng3" "ast-invs-ng3" "ast-invs-dp-ng3" "ast-invs-sn-ng3" "ast-invs-sn-dp-ng3" "invs-ng3" "syntax-ng3")
  # bows=("invs-sn-dp-ng3" "ast-invs-sn-dp-ng3" "ast-ng3"  "syntax-ng3")
fi
invs_bows=("ast-invs-ng3" "ast-invs-dp-ng3" "ast-invs-sn-ng3" "ast-invs-sn-dp-ng3" "invs-ng3" "invs-sn-dp-ng3" "invs-sn-ng3" "invs-dp-ng3")
# invs_bows=("invs-sn-dp-ng3" "ast-invs-sn-dp-ng3")
clustering_algs_dirs=("kmeans_clusters_10p") # "kmeans_clusters_20p") # "minibatch_kmeans_clusters_10p" "birch_clusters_10p" "gaussian_mixture_clusters_10p" "minibatch_kmeans_clusters_20p" "birch_clusters_20p" "gaussian_mixture_clusters_20p")
echo "Using "${#bows[@]}" Bag of Worlds Models"
for exercise in $(find $initial_dir/incorrect_submissions/$dataset_dir/lab*/ex*/*.c -maxdepth 0  -type f);
do
  dataset=$(echo $exercise | rev | cut -d '/' -f 4 | rev)
  ex=$dataset/$(echo $exercise | rev | cut -d '/' -f 3 | rev)/$(echo $exercise | rev | cut -d '/' -f 2 | rev)
  sub=$(echo $exercise | rev | cut -d '/' -f 1 | rev | sed 's/.c//')
  echo "Dealing with "$ex/$sub
  for((bn=0;bn<${#bows[@]};bn++));
  do
    b=${bows[$bn]}
    mkdir -p $data_dir/results/closest_programs/all_correct_submissions/$ex/$b/$sub
    $runsolver_dir/runsolver -o $data_dir/results/closest_programs/all_correct_submissions/$ex/$b/$sub/out.o -w $data_dir/results/closest_programs/all_correct_submissions/$ex/$b/$sub/watcher.w -v $data_dir/results/closest_programs/all_correct_submissions/$ex/$b/$sub/var.v -W 3600 --rss-swap-limit 32000 \
    python python_scripts/create_closest_programs_dir.py -ip incorrect_submissions/$ex/$sub.c -cb $data_dir/bows/correct_programs_clara_supports/$ex/$b.pickle.gz -ib $data_dir/bows/incorrect_submissions/$ex/$b.pickle.gz -v -o $data_dir/closest_programs/all_correct_submissions/$b
    for((c=0;c<${#clustering_algs_dirs[@]};c++));
    do
      ca_dir=${clustering_algs_dirs[$c]}
      mkdir -p $data_dir/results/closest_programs/$ca_dir/$ex/$b/$sub
      # using clusters' representatives
      $runsolver_dir/runsolver -o $data_dir/results/closest_programs/$ca_dir/$ex/$b/$sub/out.o -w $data_dir/results/closest_programs/$ca_dir/$ex/$b/$sub/watcher.w -v $data_dir/results/closest_programs/$ca_dir/$ex/$b/$sub/var.v -W 3600 --rss-swap-limit 32000 \
      python python_scripts/create_closest_programs_dir.py -ip incorrect_submissions/$ex/$sub.c -cb $data_dir/bows/correct_programs_clara_supports/$ex/$b.pickle.gz -ib $data_dir/bows/incorrect_submissions/$ex/$b.pickle.gz -v -cd $data_dir/clusters/$ca_dir/$b/$ex/$sub -o $data_dir/closest_programs/$ca_dir/$b/
    done
  done
  for((bn=0;bn<${#invs_bows[@]};bn++));
  do
    b=${invs_bows[$bn]}
    for((c=0;c<${#clustering_algs_dirs[@]};c++));
    do
      ca_dir=${clustering_algs_dirs[$c]}
      mkdir -p $data_dir/results/closest_programs/$ca_dir/$ex/composed/$b"--ast-ng3"/$sub
      # using the composed method (bow Ins+AAST -> only AAST for program distance calculation)
      $runsolver_dir/runsolver -o $data_dir/results/closest_programs/$ca_dir/$ex/composed/$b"--ast-ng3"/$sub/out.o -w $data_dir/results/closest_programs/$ca_dir/$ex/composed/$b"--ast-ng3"/$sub/watcher.w -v $data_dir/results/closest_programs/$ca_dir/$ex/composed/$b"--ast-ng3"/$sub/var.v -W 3600 --rss-swap-limit 32000 \
      python python_scripts/create_closest_programs_dir.py -ip incorrect_submissions/$ex/$sub -cb $data_dir/bows/correct_programs_clara_supports/$ex/ast-ng3.pickle.gz -ib $data_dir/bows/incorrect_submissions/$ex/ast-ng3.pickle.gz -v -cd $data_dir/clusters/$ca_dir/$b/$ex/$sub -o $data_dir/closest_programs/$ca_dir"/composed/"$b"--ast-ng3"
    done
  done
done
