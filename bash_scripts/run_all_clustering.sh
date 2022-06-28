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

echo "Injecting correct student submissions with our visitors ScopeVariables and VariablesRenamer..."
./bash_scripts/inject_student_programs.sh correct_submissions

echo "Injecting incorrect student submissions with our visitors ScopeVariables and VariablesRenamer..."
./bash_scripts/inject_student_programs.sh incorrect_submissions

echo "Computing daikon invariants for all correct submissions..."
./bash_scripts/get_daikon_invariants.sh correct_submissions

echo "Computing daikon invariants for all incorrect submissions..."
./bash_scripts/get_daikon_invariants.sh incorrect_submissions

echo "Computing ASTs for every submission..."
# to compute ASTs files
python python_scripts/get_ASTs.py -d correct_submissions/
python python_scripts/get_ASTs.py -d incorrect_submissions/

./bash_scripts/clustering.sh
