#!/usr/bin/env bash
#Title			: clustering_bows_vectors.sh
#Usage			: bash clustering_bows_vectors.sh
#Author			: pmorvalho
#Date			: September 20, 2021
#Description    	: Finds all available BagOfWords (bows). For each bow, calls get_bows_clusters.py to cluster a given set of programs (exercise) based on that bow
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
  bows=("invs-dp-ng3" "invs-sn-ng3" "invs-sn-dp-ng3" "ast-ng3" "ast-invs-ng3" "ast-invs-dp-ng3" "ast-invs-sn-ng3" "ast-invs-sn-dp-ng3" "invs-ng3" "syntax-ng3")
  # bows=("invs-sn-dp-ng3" "ast-invs-sn-dp-ng3" "ast-ng3"  "syntax-ng3")
fi

clustering_algs_dirs=("kmeans" "minibatch_kmeans" "birch" "gaussian_mixture")
cluster_algs=("k" "mbk" "b" "gm")
clusters_percentage=("10" "20")
echo "Using "${#bows[@]}" Bag of Worlds Models"
for exercise in $(find $initial_dir/incorrect_submissions/$dataset_dir/lab*/ex*/*.c -maxdepth 0  -type f);
do
  dataset=$(echo $exercise | rev | cut -d '/' -f 4 | rev)
  lab=$(echo $exercise | rev | cut -d '/' -f 3 | rev)
  ex=$dataset/$lab/$(echo $exercise | rev | cut -d '/' -f 2 | rev)
  sub=$(echo $exercise | rev | cut -d '/' -f 1 | rev | sed 's/.c//') # submission_id
  echo "Dealing with "$ex/$sub
  for((bn=0;bn<${#bows[@]};bn++));
  do
    b=${bows[$bn]}
    # echo "Using BagOfWords model "$b
    for((c=0;c<${#cluster_algs[@]};c++));
    do
      ca=${cluster_algs[$c]}
      ca_dir=${clustering_algs_dirs[$c]}
      for((cp=0;cp<${#clusters_percentage[@]};cp++));
      do
        per=${clusters_percentage[$cp]}
        mkdir -p $data_dir/results/clusters/$ca_dir"_clusters_"$per"p"/$b/$ex/$sub
        $runsolver_dir/runsolver -o $data_dir/results/clusters/$ca_dir"_clusters_"$per"p"/$b/$ex/$sub/out.o -w $data_dir/results/clusters/$ca_dir"_clusters_"$per"p"/$b/$ex/$sub/watcher.w -v $data_dir/results/clusters/$ca_dir"_clusters_"$per"p"/$b/$ex/$sub/var.v -W 3600 --rss-swap-limit 32000 \
        python python_scripts/get_bows_clusters.py -b $data_dir/bows/correct_programs_clara_supports/$ex/$b.pickle.gz $ca -v -o $data_dir/clusters/$ca_dir"_clusters_"$per"p"/$b/$ex/$sub -cp $per -si $sub &
      done
    done
    wait
  done
done
