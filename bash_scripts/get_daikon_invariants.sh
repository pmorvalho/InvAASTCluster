#!/usr/bin/env bash
#Title			: get_daikon_invariants.sh
#Usage			: bash get_daikon_invariants.sh [correct_submissions|incorrect_submissions] [lab_dir]
#Author			: pmorvalho
#Date			: April 12, 2021
#Description	        : creates a dir with invariants for each lab exercise
#Notes			:
#Script Version		: 1.0
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

if [[ $1 == "" ]]; then
  submissions_dir="correct_submissions"
else
  submissions_dir=$1
fi

if [[ $2 != "" ]]; then
  labs=( $2 )
else
  labs=()
  for lab in $(find injected_programs/$submissions_dir/lab* -maxdepth 0 -type d);
  do
    lab=$(echo $lab | rev | cut -d '/' -f 1 | rev)
    labs+=("$lab")
    echo "Found: "$lab
  done
fi

initial_dir=$(pwd)
data_dir="InvAASTCluster-results"
for((l=0;l<${#labs[@]};l++));
do
  lab=${labs[$l]}
  echo "Processing: "$lab
  for exercise in $(find injected_programs/$submissions_dir/$lab/ex* -maxdepth 0  -type d);
  do
    ex=$(echo $exercise | rev | cut -d '/' -f 1 | rev)
    dataset=$(echo $exercise | rev | cut -d '/' -f 3 | rev)
    echo "Processing "$ex
    output_dir=$data_dir/daikon-invariants/$submissions_dir/$lab/$ex
    mkdir -p $output_dir/submissions
    cp -r tests/$dataset/$lab/$ex/ $output_dir/tests/
    cp solutions/$lab/$ex.c $output_dir/.
    cp -r $exercise/* $output_dir/submissions/.
    for sub in $(find $initial_dir/injected_programs/$submissions_dir/$lab/$ex/*/*.c -maxdepth 0);
    do
      sub_name=$(echo $sub | rev | cut -d '/' -f 2 | rev | sed 's/.c//')
      sub_dir=$output_dir/submissions/$sub_name
      mkdir -p $sub_dir
      cp $sub $sub_dir/.
      #gcc -Wall -Wextra -Werror -ansi -pedantic -lm
      gcc -ansi -gdwarf-2 -no-pie -fno-stack-clash-protection $sub_dir/$sub_name.c -o $sub_dir/$ex
      cd $sub_dir
      mkdir invariants
      for t in $(find $data_dir/daikon-invariants/$submissions_dir/$lab/$ex/tests/*.in -maxdepth 0);
      do
        test_name=$(echo $t | rev | cut -d '/' -f 1 | rev | sed 's/.in//')
        kvasir-dtrace --dtrace-file=daikon-output/$test_name.dtrace --program-stdout=daikon-output/$test_name.out ./$ex < $t
        java -cp $DAIKONDIR/daikon.jar daikon.Daikon daikon-output/$test_name.dtrace daikon-output/$ex.decls -o invariants/$test_name-invariants.inv.gz > invariants/$test_name-invariants.txt
        java -cp $DAIKONDIR/daikon.jar daikon.Daikon --output_num_samples  daikon-output/$test_name.dtrace daikon-output/$ex.decls -o invariants/$test_name-invariants_num_samples.inv.gz > invariants/$test_name-invariants_num_samples.txt
      done
      java -cp $DAIKONDIR/daikon.jar daikon.Daikon daikon-output/*.dtrace daikon-output/$ex.decls -o invariants/invariants.inv.gz > invariants/invariants.txt
      java -cp $DAIKONDIR/daikon.jar daikon.Daikon --output_num_samples  daikon-output/*.dtrace daikon-output/$ex.decls -o invariants/invariants_num_samples.inv.gz > invariants/invariants_num_samples.txt
      cd $initial_dir
    done
  python python_scripts/compute_invariants_sets.py -d $data_dir/daikon-invariants/$submissions_dir/$lab/$ex/submissions/
  python python_scripts/compute_invariants_sets.py -d $data_dir/daikon-invariants/$submissions_dir/$lab/$ex/submissions/ -n
  python python_scripts/compute_invariants_sets.py -d $data_dir/daikon-invariants/$submissions_dir/$lab/$ex/submissions/ -dp
  python python_scripts/compute_invariants_sets.py -d $data_dir/daikon-invariants/$submissions_dir/$lab/$ex/submissions/ -n -dp
  done
done
