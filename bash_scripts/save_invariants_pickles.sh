#!/usr/bin/env bash
#Title			: save_invariants_pickles.sh
#Usage			: bash save_invariants_pickles.sh
#Author			: pmorvalho
#Date			: October 31, 2021
#Description    	: Saves all the program invariants into pickle files
#Notes			: 
# (C) Copyright 2021 Pedro Orvalho.
#==============================================================================

for exercise in $(find daikon-invariants/$1/lab*/ex* -maxdepth 0  -type d);
  do
  python python_scripts/compute_invariants_sets.py -d $exercise/submissions/
  python python_scripts/compute_invariants_sets.py -d $exercise/submissions/ -n
  python python_scripts/compute_invariants_sets.py -d $exercise/submissions/ -dp
  python python_scripts/compute_invariants_sets.py -d $exercise/submissions/ -n -dp
done
