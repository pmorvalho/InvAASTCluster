#!/usr/bin/env bash
#Title			: test_clustering_algs.sh [correct_submissions|incorrect_submissions]
#Usage			: bash test_clustering_algs.sh
#Author			: pmorvalho
#Date			: May 11, 2021
#Description    	: Computes all plots and values for the available clustering techniques on clustering_bow.py script
#Notes			:
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================
initial_dir=$(pwd)

if [[ $1 == "" ]]; then
  submissions_dir="correct_submissions"
else
  submissions_dir=$1
  if [[ $submissions_dir == "correct_submissions" ]]; then
    use_submissions="correct_submissions"
  else
    use_submissions="*/"
  fi
fi

mkdir -p plots/clustering/$submissions_dir/ results/clustering/$submissions_dir/

n_grams=("-ng 1" "-ng 2" "-ng 3") # assuming we only want to test ngram from 1 to 3
cluster_algs=("k" "mbk" "w" "sc" "db" "b" "gm")
get_clustering_results () {
  for((n=0;n<${#n_grams[@]};n++));
  do
    ng=${n_grams[$n]}
    for((d=0;d<${#dirs[@]};d++));
    do
      dir=${dirs[$d]}
      for((f=0;f<${#flags[@]};f++));
      do
        flag=${flags[$f]}
        lab=$(echo $dir | rev | cut -d '/' -f 1 | rev)
        lab=$(python -c "print(str('$lab')) if 'lab' in str('$lab') else print('all_labs')")
        rs_name=$(python -c "print(('$flag'.replace(' ','')+'$ng'.replace(' ','')).replace('--','-')[1:])")
        mkdir -p plots/clustering/$submissions_dir/$lab/tsne/ plots/clustering/$submissions_dir/$lab/svd results/clustering/$submissions_dir/$lab/svd results/clustering/$submissions_dir/$lab/tsne
        echo "Testing represetation: "$rs_name
        # python python_scripts/clustering_bow.py -d $dir $flag $ng --all -o plots/clustering/$submissions_dir/$lab/svd/$rs_name --pickle_file results/clustering/$submissions_dir/$lab/svd/$rs_name > results/clustering/$submissions_dir/$lab/svd/$rs_name.out
        for((ca=0;ca<${#cluster_algs[@]};ca++));
        do
          c_alg=${cluster_algs[$ca]}
          mkdir -p plots/clustering/$submissions_dir/$lab/tsne/$c_alg results/clustering/$submissions_dir/$lab/tsne/$c_alg
          python python_scripts/clustering_bow.py -d $dir $flag $ng $c_alg --tsne -o plots/clustering/$submissions_dir/$lab/tsne/$c_alg/$rs_name --pickle_file results/clustering/$submissions_dir/$lab/tsne/$c_alg/$rs_name > results/clustering/$submissions_dir/$lab/tsne/$c_alg/$rs_name.out
        done
      done
    done
  done
}

dirs=("daikon-invariants/"$use_submissions)
flags=("-i" "-i -sn" "-i -dp" "-i -sn -dp")
for lab in $(find daikon-invariants/$use_submissions/lab* -maxdepth 0 -type d);
do
  dirs+=("$lab")
done
get_clustering_results


flags=("-a -i" "-a -i -sn" "-a -i -dp" "-a -i -sn -dp")
dirs=("ASTs/"$use_submissions)
for lab in $(find ASTs/$use_submissions/lab* -maxdepth 0 -type d);
do
  dirs+=("$lab")
done
get_clustering_results


flags=("-a")
dirs=("ASTs/"$use_submissions)
for lab in $(find ASTs/$use_submissions/lab* -maxdepth 0 -type d);
do
  dirs+=("$lab")
done
get_clustering_results

dirs=("injected_programs/"$use_submissions)
flags=("-s")
for lab in $(find injected_programs/$use_submissions/lab* -maxdepth 0 -type d);
do
  dirs+=("$lab")
done
get_clustering_results
