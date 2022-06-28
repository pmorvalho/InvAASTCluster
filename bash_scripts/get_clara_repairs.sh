#!/usr/bin/env bash
#Title			: get_clara_repairs.sh
#Usage			: bash get_clara_repairs.sh [-a|-clara|-closest|-compose|-clusters]
#Author			: pmorvalho
#Date			: August 30, 2021
#Description     	: Gets clara repairs for our sets of correct programs: clara clusters, closest program (first) and several programs at the same distance.
#Notes			: -a to use all bag of words models
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

# to activate clara python-environment
if [ -f ~/opt/anaconda3/etc/profile.d/conda.sh ]; then
  # if running on MacOS
    source ~/opt/anaconda3/etc/profile.d/conda.sh
else
  # if running on ARSR Machines (Linux)
    source ~/anaconda3/etc/profile.d/conda.sh
fi
conda activate clara

initial_dir=$(pwd)
data_dir="InvAASTCluster-results"
dataset_dir="*"
runsolver_dir="/home/pmorvalho/runsolver/src"
if [[ $2 == "C-Pack-IPAs" || $2 == "itsp" ]]; then
  dataset_dir=$2
fi

get_clara_inputs(){
  test_inputs="$(python python_scripts/get_inputs_for_clara.py $ex)"
  test_inputs="$(echo $test_inputs | sed -E 's/\\"/\"/g')"
}

clara_repair() {
  cd ../frameworks/clara
  cluster_dir=$data_dir/$correct_programs/$ex/$sub_name/*.c
  mkdir -p $data_dir/results/repairs/$correct_programs/$ex/$sub_name
  # since there is a small number of incorrect submissions for each exercise, we are going to run all of them at the same time (&)
  $runsolver_dir/runsolver -o $data_dir/results/repairs/$correct_programs/$ex/$sub_name/out.o -w $data_dir/results/repairs/$correct_programs/$ex/$sub_name/watcher.w -v $data_dir/results/repairs/$correct_programs/$ex/$sub_name/var.v -W 1200 --rss-swap-limit 32000 \
  clara feedback $cluster_dir $sub --entryfnc main --timeout 600 --ingoreio 0 --lang c --ins $test_inputs --feedback c --verbose
  # \ >> $data_dir/results/repairs/$correct_programs/$ex/$sub_name/out.o
  grep "^*.*$" $data_dir/results/repairs/$correct_programs/$ex/$sub_name/out.o > $data_dir/results/repairs/$correct_programs/$ex/$sub_name/repair.r
  cd $initial_dir
}

get_repairs(){
  # receives as parameter $1-directory with correct submissions
  correct_programs=$1
  for exercise in $(find $initial_dir/incorrect_submissions/$dataset_dir/lab*/ex* -maxdepth 0  -type d);
  do
    dataset=$(echo $exercise | rev | cut -d '/' -f 3 | rev) 
    lab=$(echo $exercise | rev | cut -d '/' -f 2 | rev)
    ex=$dataset/$lab/$(echo $exercise | rev | cut -d '/' -f 1 | rev)
    # check if there is any correct submission supported by Clara
    if [[ ! -d $initial_dir/correct_programs_clara_supports/$ex ]]; then
      continue
    fi
    get_clara_inputs
    echo "Processing "$ex
    for sub in $(find $exercise/*c -maxdepth 0  -type f);
    do
      sub_name=$(echo $(echo $sub | rev | cut -d '/' -f 1 | rev) | rev | cut -d '.' -f 2 | rev)
      echo "Repairing: "$sub_name
      clara_repair $sub $correct_programs &
    done
    echo
    wait
  done
}

if [[ $1 == "-clara" ]]; then
  get_repairs clusters/clara_clusters
  get_repairs clusters/clara_clusters_no_jsons
  exit
fi

bows=()
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
  # bows=("invs-dp-ng3" "invs-sn-ng3" "invs-sn-dp-ng3" "ast-ng3" "ast-invs-ng3" "ast-invs-dp-ng3" "ast-invs-sn-ng3" "ast-invs-sn-dp-ng3" "invs-ng3" "syntax-ng3")
  bows=("invs-sn-dp-ng3" "ast-invs-sn-dp-ng3" "ast-ng3" "syntax-ng3")
fi

# clustering_algs_dirs=("kmeans" "minibatch_kmeans" "birch" "gaussian_mixture")
clustering_algs_dirs=("kmeans")

if [[ $1 == "-composed" ]]; then
  # invs_bows=("ast-invs-ng3" "ast-invs-dp-ng3" "ast-invs-sn-ng3" "ast-invs-sn-dp-ng3" "invs-ng3")
  # invs_bows=("ast-invs-ng3" "ast-invs-dp-ng3" "ast-invs-sn-ng3" "ast-invs-sn-dp-ng3" "invs-ng3" "invs-sn-dp-ng3" "invs-sn-ng3" "invs-dp-ng3")
  invs_bows=("invs-sn-dp-ng3" "ast-invs-sn-dp-ng3")
  for((bn=0;bn<${#invs_bows[@]};bn++));
  do
    b=${invs_bows[$bn]}
    echo "Using composed method Invariants BOW "$b" followed by AAST BagOfWords Model ast-ng3"
    for((c=0;c<${#clustering_algs_dirs[@]};c++));
    do
      ca_dir=${clustering_algs_dirs[$c]}
      get_repairs closest_programs/$ca_dir"_clusters_10p"/composed/$b"--ast-ng3"/first_program
      get_repairs closest_programs/$ca_dir"_clusters_10p"/composed/$b"--ast-ng3"/several_programs
      # get_repairs closest_programs/$ca_dir"_clusters_20p"/composed/$b"--ast-ng3"/first_program
      # get_repairs closest_programs/$ca_dir"_clusters_20p"/composed/$b"--ast-ng3"/several_programs
    done
  done
 exit
fi

if [[ $1 == "-closest" ]]; then
  # repairs using closest programs
  for((bn=0;bn<${#bows[@]};bn++));
  do
    b=${bows[$bn]}
    echo "Using BagOfWords Model "$b
    get_repairs closest_programs/all_correct_submissions/$b/first_program
    # several_programs (cluster) meaning that more than one program is at the same distance to the incorrect program.
    get_repairs closest_programs/all_correct_submissions/$b/several_programs
    for((c=0;c<${#clustering_algs_dirs[@]};c++));
    do
      ca_dir=${clustering_algs_dirs[$c]}
      get_repairs closest_programs/$ca_dir"_clusters_10p"/$b/first_program
      get_repairs closest_programs/$ca_dir"_clusters_10p"/$b/several_programs
      # get_repairs closest_programs/$ca_dir"_clusters_20p"/$b/first_program
      # get_repairs closest_programs/$ca_dir"_clusters_20p"/$b/several_programs
    done
  done
  exit
fi

if [[ $1 == "-clusters" ]]; then
  # repairs using clustering algorithms' results
  for((bn=0;bn<${#bows[@]};bn++));
  do
    b=${bows[$bn]}
    echo "Using BagOfWords Model "$b
    for((c=0;c<${#clustering_algs_dirs[@]};c++));
    do
      ca_dir=${clustering_algs_dirs[$c]}
      echo "Clustering algorithm: "$ca_dir
      # now using the set of representative programs for each IPA according to this BagOfWords model
      get_repairs clusters/$ca_dir"_clusters_10p"/$b
      # get_repairs clusters/$ca_dir"_clusters_20p"/$b
    done
  done
  exit
fi
