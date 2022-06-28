#!/usr/bin/env bash
#Title			: get_clara_clusters.sh
#Usage			: bash get_clara_clusters.sh
#Author			: pmorvalho
#Date			: September 07, 2021
#Description	        : Generates CLARA's clusters for each exercises of correct programming assignments, considering an incorrect submission
#Notes			: We updated this script to create individual clusters for each incorrect submission, this way we can ignore the same student's future correct submission for the same exercis
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

runsolver_dir="/home/pmorvalho/runsolver/src"

get_clara_inputs(){
  test_inputs="$(python python_scripts/get_inputs_for_clara.py $ex)"
  test_inputs="$(echo $test_inputs | sed -E 's/\\"/\"/g')"
}

data_dir="InvAASTCluster-results"
rm -rf $data_dir/results/clusters/clara_clusters/ $data_dir/clusters/clara_clusters/
initial_dir=$(pwd)
for exercise in $(find $initial_dir/incorrect_submissions/*/lab*/ex*/*.c -maxdepth 0  -type f);
do
  dataset=$(echo $exercise | rev | cut -d '/' -f 4 | rev)
  lab=$(echo $exercise | rev | cut -d '/' -f 3 | rev)
  ex=$dataset/$lab/$(echo $exercise | rev | cut -d '/' -f 2 | rev)
  sub=$(echo $exercise | rev | cut -d '/' -f 1 | rev | sed 's/.c//') # submission_id
  mkdir -p $data_dir/clusters/clara_clusters/$ex/$sub $data_dir/results/clusters/clara_clusters/$ex/$sub
  get_clara_inputs # gets test_inputs
  prog_list=$(python python_scripts/programs_without_studentX.py $initial_dir/correct_programs_clara_supports/$ex/ $sub)
  echo "Input tests: "$test_inputs
  cd clara
  $runsolver_dir/runsolver -o $data_dir/results/clusters/clara_clusters/$ex/$sub/out.o -w $data_dir/results/clusters/clara_clusters/$ex/$sub/watcher.w -v $data_dir/results/clusters/clara_clusters/$ex/$sub/var.v -W 3600 --rss-swap-limit 32000 \
  clara cluster $prog_list --clusterdir $data_dir/clusters/clara_clusters/$ex/$sub --entryfnc main  --lang c --ins $test_inputs --verbose 1
  cd $initial_dir
  echo $ex/$sub " clustered!"
  echo
done
