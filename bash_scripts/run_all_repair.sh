#!/usr/bin/env bash
#Title			: run_all_repair.sh
#Usage			: bash run_all_repair.sh
#Author			: pmorvalho
#Date			: September 08, 2021
#Description    	: Commands for getting repair results.
#Notes			: Assuming that run_all_clustering.sh has been already executed
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

# first run ./bash_scripts/run_all_clustering.sh
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

echo "Computing clara's clusters..."
rm -rf $data_dir/clusters/clara_clusters
./bash_scripts/get_clara_clusters.sh | tee all_output_clara_clusters.txt
mv all_output_clara_clusters.txt $data_dir/results/clusters/clara_clusters/.
# rm -rf $data_dir/clusters/clara_clusters_no_jsons
# cp -r $data_dir/clusters/clara_clusters $data_dir/clusters/clara_clusters_no_jsons
# rm $data_dir/clusters/clara_clusters_no_jsons/*/*/*/*/*.json
gzip --force $data_dir/results/clusters/clara_clusters/*/*.w

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

# rm -rf $data_dir/csvs/repairs $data_dir/plots/repairs ~/public_html/repair_plots
echo "Repairing all incorrect programs using all clustering techniques..."
# ## 1 - Using Clara's clustering method
# ## 2 - Using the cluster's representatives achieved by using birch algorithm on our BOWs' program vectors
# ## 3 - Using all the closest program to each incorrect program
# rm -rf $data_dir/results/repairs/clusters/clara_clusters
# rm -rf $data_dir/results/repairs/clusters/clara_clusters_no_jsons
# rm -rf $data_dir/results/repairs/clusters/*_clusters_10p
# rm -rf $data_dir/results/repairs/clusters/*_clusters_20p
# rm -rf $data_dir/results/repairs/closest_programs
# ## ./bash_scripts/get_clara_repairs.sh -a # to run all BoWs 
# if [[ ! -d $data_dir/results/repairs/clusters/clara_clusters ]]; then
    # ./bash_scripts/get_clara_repairs.sh -clara
# fi
# if [[ ! -d $data_dir/results/repairs/closest_programs ]]; then
    ./bash_scripts/get_clara_repairs.sh -closest C-Pack-IPAs
    ./bash_scripts/get_clara_repairs.sh -closest itsp
# fi
# if [[ ! -d $data_dir/results/repairs/closest_programs/kmeans_clusters_10p/composed ]]; then
    ./bash_scripts/get_clara_repairs.sh -composed C-Pack-IPAs
    ./bash_scripts/get_clara_repairs.sh -composed itsp
# fi
# if [[ ! -d $data_dir/results/repairs/clusters/kmeans_clusters_10p ]]; then
    ./bash_scripts/get_clara_repairs.sh -clusters C-Pack-IPAs
    ./bash_scripts/get_clara_repairs.sh -clusters itsp
# fi
# gzip --force $data_dir/results/repairs/clusters/clara_clusters/*/*/*/*.o
gzip --force $data_dir/results/repairs/clusters/clara_clusters/*/*/*/*/*.w
# gzip --force $data_dir/results/repairs/clusters/clara_clusters_no_jsons/*/*/*/*.o 
gzip --force $data_dir/results/repairs/clusters/clara_clusters_no_jsons/*/*/*/*/*.w
#gzip --force $data_dir/results/repairs/clusters/*_clusters_10p/*/*/*/*.o 
gzip --force $data_dir/results/repairs/clusters/*_clusters_10p/*/*/*/*/*.w
#gzip --force $data_dir/results/repairs/clusters/*_clusters_20p/*/*/*/*.o 
gzip --force $data_dir/results/repairs/clusters/*_clusters_20p/*/*/*/*/*.w
#gzip --force $data_dir/results/repairs/closest_programs/*/*/*/*/*/*/*.o 
gzip --force $data_dir/results/repairs/closest_programs/*/*/*/*/*/*/*.w

