#!/usr/bin/env bash
#Title			: get_correct_progs_clara_supports.sh
#Usage			: bash get_correct_progs_clara_supports.sh
#Author			: pmorvalho
#Date			: October 28, 2021
#Description	        : Runs every correct_program and find if it is supported by clara.
#Notes			:
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

runsolver_dir="/home/pmorvalho/runsolver/src"
# to activate clara python-environment
if [ -f ~/opt/anaconda3/etc/profile.d/conda.sh ]; then
  # if running on MacOS
    source ~/opt/anaconda3/etc/profile.d/conda.sh
else
  # if running on ARSR Machines (Linux)
    source ~/anaconda3/etc/profile.d/conda.sh
fi
conda activate clara

get_clara_inputs(){
  test_inputs="$(python python_scripts/get_inputs_for_clara.py $1/$ex)"
  test_inputs="$(echo $test_inputs | sed -E 's/\\"/\"/g')"
}

data_dir="InvAASTCluster-results"
# $data_dir/
check_correct_submissions(){
  mkdir correct_programs_clara_supports/$1/
  mkdir -p $data_dir/results/programs_clara_supports
  initial_dir=$(pwd)
  for exercise in $(find $initial_dir/correct_submissions/$1/lab*/ex*/*.c -maxdepth 0  -type f);
  do
    ex=$(echo $exercise | rev | cut -d '/' -f 3 | rev)/$(echo $exercise | rev | cut -d '/' -f 2 | rev)
    sub=$(echo $exercise | rev | cut -d '/' -f 1 | rev | sed 's/.c//') # submission_id
    mkdir -p $data_dir/results/programs_clara_supports/$1/$ex/$sub/
    get_clara_inputs $1
    echo "Input tests: "$test_inputs
    cd clara
    $runsolver_dir/runsolver -o $data_dir/results/programs_clara_supports/$1/$ex/$sub/out.o -w $data_dir/results/programs_clara_supports/$1/$ex/$sub/watcher.w -v $data_dir/results/programs_clara_supports/$1/$ex/$sub/var.v -W 3600 --rss-swap-limit 32000 \
    clara match $exercise $exercise --entryfnc main --lang c --ins $test_inputs --verbose 1
    cd $initial_dir
    if [ "$(more $data_dir/results/programs_clara_supports/$1/$ex/$sub/out.o  | tail -n 1)" == "Match!" ]; then
      mkdir -p correct_programs_clara_supports/$1/$ex/
      cp $exercise correct_programs_clara_supports/$1/$ex/$sub.c
      echo $1/$ex/$sub " supported!"
    else 
      echo $1/$ex/$sub " NOT supported!"
    fi
  done
}

check_correct_submissions C-Pack-IPAs
check_correct_submissions itsp
