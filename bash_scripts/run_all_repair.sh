#!/usr/bin/env bash
#Title			: run_all_repair.sh
#Usage			: bash run_all_repair.sh
#Author			: pmorvalho
#Date			: September 08, 2021
#Description    	: Commands for getting repair results.
#Notes			: Assuming that run_all_clustering.sh has been already executed
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

data_dir="InvAASTCluster-results"

./bash_scripts/run_all_clustering.sh

echo "Computing clara's clusters..."
rm -rf $data_dir/clusters/clara_clusters
./bash_scripts/get_clara_clusters.sh | tee all_output_clara_clusters.txt
mv all_output_clara_clusters.txt $data_dir/results/clusters/clara_clusters/.
# rm -rf $data_dir/clusters/clara_clusters_no_jsons
# cp -r $data_dir/clusters/clara_clusters $data_dir/clusters/clara_clusters_no_jsons
# rm $data_dir/clusters/clara_clusters_no_jsons/*/*/*/*/*.json
gzip --force $data_dir/results/clusters/clara_clusters/*/*.w

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

