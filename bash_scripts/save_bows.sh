#!/usr/bin/env bash
#Title			: save_bows.sh
#Usage			: bash save_bows.sh [correct_submissions|incorrect_submissions]
#Author			: pmorvalho
#Date			: August 10, 2021
#Description	        : Computes and saves bag of words models for a given directory of submissions
#Notes			:
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

initial_dir=$(pwd)
data_dir="InvAASTCluster-results"

if [[ $1 == "" ]]; then
  submissions_dir="correct_submissions"
  # submissions_dir="correct_submissions"
else
  submissions_dir=$1
fi
if [[ $submissions_dir =~ .*/ ]]; then
  submissions_dir=${submissions_dir%/}
fi
mkdir -p $data_dir/bows/$submissions_dir/ $data_dir/results/bows/$submissions_dir/

if [[ $2 == "-a" ]]; then
  n_grams=("-ng 1" "-ng 2" "-ng 3") # assuming we only want to test ngram from 1 to 3
else
  n_grams=("-ng 3") # assuming we only want to test ngram from 1 to 3
fi

save_bows_vectors () {
  for((d=0;d<${#dirs[@]};d++));
  do
    dir=${dirs[$d]}
    for((n=0;n<${#n_grams[@]};n++));
    do
      ng=${n_grams[$n]}
      for((f=0;f<${#flags[@]};f++));
      do
        flag=${flags[$f]}
        lab=$(echo $dir | rev | cut -d '/' -f 2 | rev)/$(echo $dir | rev | cut -d '/' -f 1 | rev)
        lab=$(python -c "print(str('$lab')) if 'lab' in str('$lab') else print('all_labs')")
        rs_name=$(python -c "print(('$flag'.replace(' ','')+'$ng'.replace(' ','')).replace('--','-')[1:])")
        mkdir -p $data_dir/bows/$submissions_dir/$lab/ $data_dir/results/bows/$submissions_dir/$lab
        echo "Saving bag of words represetation: "$lab $rs_name
        python python_scripts/bag_of_words.py -d $dir $flag $ng -o $data_dir/bows/$submissions_dir/$lab/ > $data_dir/results/bows/$submissions_dir/$lab/$rs_name.out &
      done
    done
    wait
  done
}

#dirs=("$data_dir/daikon-invariants/"$submissions_dir)
dirs=()
flags=("-i" "-i -sn" "-i -dp" "-i -sn -dp")
for lab in $(find $data_dir/daikon-invariants/$submissions_dir/lab* -mindepth 1 -maxdepth 1 -type d);
do
  dirs+=("$lab")
done
save_bows_vectors

flags=("-a")
#dirs=("$data_dir/ASTs/"$submissions_dir)
dirs=()
for lab in $(find $data_dir/ASTs/$submissions_dir/lab* -mindepth 1 -maxdepth 1 -type d);
do
  dirs+=("$lab")
done
save_bows_vectors

flags=("-a -i" "-a -i -sn" "-a -i -dp" "-a -i -sn -dp")
#dirs=("$data_dir/ASTs/"$submissions_dir)
dirs=()
for lab in $(find $data_dir/ASTs/$submissions_dir/lab* -mindepth 1 -maxdepth 1 -type d);
do
  dirs+=("$lab")
done
save_bows_vectors

#dirs=("injected_programs/"$submissions_dir)
dirs=()
flags=("-s")
for lab in $(find injected_programs/$submissions_dir/lab* -mindepth 1 -maxdepth 1 -type d);
do
  dirs+=("$lab")
done
save_bows_vectors
