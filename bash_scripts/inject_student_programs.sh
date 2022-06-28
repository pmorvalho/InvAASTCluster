#!/usr/bin/env bash
#Title			: inject_student_programs.sh
#Usage			: bash inject_student_programs.sh [correct_submissions|incorrect_submissions] [lab_dir]
#Author			: pmorvalho
#Date			: April 14, 2021
#Description     	:
#Notes			:
#Script Version		: 1.0
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================
initial_dir=$(pwd)

if [[ $1 == "" ]]; then
  submissions_dir="correct_submissions"
else
  submissions_dir=$1
fi
if [[ $2 != "" ]]; then
  labs=( $2 )
else
  labs=()
  for lab in $(find $submissions_dir/lab* -maxdepth 0 -type d);
  do
    lab=$(echo $lab | rev | cut -d '/' -f 1 | rev)
    labs+=("$lab")
    echo "Found: "$lab
  done
fi

echo "Injecting scope variable functions"
for((l=0;l<${#labs[@]};l++));
do
  lab=${labs[$l]}
  for exercise in $(find $submissions_dir/$lab/ex* -maxdepth 0  -type d);
  do
    echo $exercise
    dataset=$(echo $exercise | rev | cut -d '/' -f 3 | rev)
    for sub in $exercise/*.c;
    do
      echo $sub
      sub_name=$(echo $sub | rev | cut -d '/' -f 1 | rev | sed 's/.c//')
      python variable_renamer/variable_renamer_visitor.py $sub injected_programs/$exercise/$sub_name
      if ! gcc injected_programs/$exercise/$sub_name/$sub_name.c injected_programs/$exercise/$sub_name/vars_info.h; then
        rm -rf injected_programs/$exercise/$sub_name $sub
        echo $sub >> compile-errors-$dataset-$lab.txt
        # exit 1
      fi
    done
  done
done

rm $initial_dir/a.out
