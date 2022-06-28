#!/usr/bin/env bash
#Title			: clustering.sh
#Usage			: bash clustering.sh
#Author			: pmorvalho
#Date			: June 12, 2021
#Description	        : Deals with all clustering commands
#Notes			:
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

echo "Saving all bows..."
./bash_scripts/save_bows.sh correct_submissions/
./bash_scripts/save_bows.sh incorrect_submissions/

# computes the results for clusters
echo "Running all clustering algorithms..."
./bash_scripts/test_clustering_algs.sh correct_submissions/
./bash_scripts/test_clustering_algs.sh incorrect_submissions/

