#!/usr/bin/env bash
#Title			: run_all_clustering.sh
#Usage			: bash run_all_clustering.sh
#Author			: pmorvalho
#Date			: April 10, 2021
#Description	        : Bash commands to process programs ahd run clustering script
#Notes			:
#Script Version		: 1.0
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

initial_dir=$(pwd)
data_dir="InvAASTCluster-results"

./bash_scripts/get_correct_progs_clara_supports.sh d| tee find_supported_programs.out 
mv find_supported_programs.out $data_dir/results/.

echo "Injecting correct student submissions with our visitors ScopeVariables and VariablesRenamer..."
./bash_scripts/inject_student_programs.sh correct_programs_clara_supports/C-Pack-IPAs &
./bash_scripts/inject_student_programs.sh correct_programs_clara_supports/itsp &

echo "Injecting incorrect student submissions with our visitors ScopeVariables and VariablesRenamer..."
./bash_scripts/inject_student_programs.sh incorrect_submissions/C-Pack-IPAs &
./bash_scripts/inject_student_programs.sh incorrect_submissions/itsp &
# wait

echo "Computing ASTs for every submission..."
python python_scripts/get_ASTs.py -d correct_programs_clara_supports/C-Pack-IPAs -o $data_dir/correct_programs_clara_supports/C-Pack-IPAs &
python python_scripts/get_ASTs.py -d correct_programs_clara_supports/itsp -o $data_dir/correct_programs_clara_supports/itsp &
python python_scripts/get_ASTs.py -d incorrect_submissions/C-Pack-IPAs -o $data_dir/incorrect_submissions/C-Pack-IPAs &
python python_scripts/get_ASTs.py -d incorrect_submissions/itsp -o $data_dir/incorrect_submissions/itsp &
wait 

echo "Computing daikon invariants for all correct submissions..."
./bash_scripts/get_daikon_invariants.sh correct_programs_clara_supports/C-Pack-IPAs
./bash_scripts/get_daikon_invariants.sh correct_programs_clara_supports/itsp

echo "Computing daikon invariants for all incorrect submissions..."
./bash_scripts/get_daikon_invariants.sh incorrect_submissions/C-Pack-IPAs
./bash_scripts/get_daikon_invariants.sh incorrect_submissions/itsp 

echo "Saving daikon invariants pickles for all correct submissions..."
./bash_scripts/save_invariants_pickles.sh correct_programs_clara_supports/C-Pack-IPAs
./bash_scripts/save_invariants_pickles.sh correct_programs_clara_supports/itsp

echo "Saving daikon invariants pickles for all incorrect submissions..."
./bash_scripts/save_invariants_pickles.sh incorrect_submissions/C-Pack-IPAs
./bash_scripts/save_invariants_pickles.sh incorrect_submissions/itsp 

echo "Computing program vectors using our Bag of Words (Bows) models..."
./bash_scripts/save_bows.sh correct_programs_clara_supports/C-Pack-IPAs | tee log_saving_bows_correct_subs_C-Pack-IPAs.txt &
./bash_scripts/save_bows.sh correct_programs_clara_supports/itsp | tee log_saving_bows_correct_subs_itsp.txt &
./bash_scripts/save_bows.sh incorrect_submissions/C-Pack-IPAs | tee saving_bows_incorrect_subs_C-Pack-IPAs.txt &
./bash_scripts/save_bows.sh incorrect_submissions/itsp | tee saving_bows_incorrect_subs_itsp.txt &
wait
gzip --force $data_dir/results/bows/*/*/*/*/*.out
mv saving_* $data_dir/results/bows/.

echo "Using Clustering Algorithms to clusters all correct submission for each programming exercise and creates a directory with each cluster's program representative..."
# # 10 percent
# rm -rf $data_dir/clusters/kmeans_clusters_10p $data_dir/clusters/minibatch_kmeans_clusters_10p $data_dir/clusters/birch_clusters_10p $data_dir/clusters/gaussian_mixture_clusters_10p
# # 20 percent
# rm -rf $data_dir/clusters/kmeans_clusters_20p $data_dir/clusters/minibatch_kmeans_clusters_20p $data_dir/clusters/birch_clusters_20p $data_dir/clusters/gaussian_mixture_clusters_20p
# ## ./bash_scripts/clustering_bows_vectors.sh -a | tee clustering_bows.txt # to run all BoWs
./bash_scripts/clustering_bows_vectors.sh itsp | tee clustering_bows_itsp.txt
./bash_scripts/clustering_bows_vectors.sh C-Pack-IPAs | tee clustering_bows.txt
mv clustering_bows*.txt $data_dir/results/.
# gzip --force $data_dir/results/clusters/*_clusters_10p/*/*/*/*.out 
gzip --force $data_dir/results/clusters/*_clusters_10p/*/*/*/*/*/*.w
# gzip --force $data_dir/results/clusters/*_clusters_20p/*/*/*/*.out 
gzip --force $data_dir/results/clusters/*_clusters_20p/*/*/*/*/*/*.w

echo "Using our Bows computes for each incorrect program the set of closest correct programs..."
# rm -rf $data_dir/results/closest_programs/ $data_dir/closest_programs/
## ./bash_scripts/get_closest_programs.sh -a # to run all BoWs
./bash_scripts/get_closest_programs.sh C-Pack-IPAs &
./bash_scripts/get_closest_programs.sh itsp &
wait
gzip --force -r $data_dir/results/closest_programs/*/*/*/*/*/*.w $data_dir/results/closest_programs/*/*/*/*/*/*/*.w
