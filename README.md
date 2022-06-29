# InvAASTCluster: On Applying Invariant-Based Program Clustering to Introductory Programming Assignments

This is an implementation of the program clustering framework for introductory programming assignments (IPAs), described in the following paper: _"InvAASTCluster: On Applying Invariant-Based Program Clustering to Introductory Programming Assignments"_ ([https://arxiv.org/abs/2206.14175](https://arxiv.org/abs/2206.14175)).

InvAASTCluster is a novel and efficient approach for clustering submissions for introductory programming assignments (IPAs) based on the submissions' sets of program invariants and anonymized abstract syntax tree (AAST) representations.

InvAASTCluster was designed as an independent clustering tool. Therefore, it can be used to help evaluate students' submissions for IPAs by clustering semantically equivalent solutions for programming exercises,
although InvAASTCluster can also be easily integrated into any clustering-based program repair tool for IPAs.
However, some program repair tools use a single reference implementation provided by the lecturer to repair a student's program. As a result, these tools usually are only able to use one correct implementation to repair each program.
Therefore, given an incorrect submission, InvAASTCluster was designed to be also capable of finding on a set of correct student submissions which submission is the closest correct solution to the incorrect program, i.e., a specific reference implementation for each incorrect submission, that may require fewer changes to fix the program.

## How to use InvAASTCluster

+ To run InvAASTCluster on a new set of IPAs (e.g. _new_dataset_)

  In order to use InvAASTCluster on a new set of IPAs, _new_dataset_, the user should divide the set of IPAs into correct and semantically incorrect submissions. Then, the user should put the correct submissions on the subdirectory    **correct_submissions/new_dataset** and the set of incorrect submissions on the folder **incorrect_submissions/new_dataset**.

  Afterward, the scripts **bash_scripts/run_all_clustering.sh** and **bash_scripts/run_all_repairing.sh** should be modified in order to use the new dataset.
  
+ To run InvAASTCluster on the available datasets of IPAs, ITSP and C-Pack-IPAs, the user should execute:

  + Only for clustering all the IPAs:
  ```
  bash ./bash_scripts/run_all_clustering.sh
  ```

  + For clustering and repairing:
  ```
  bash ./bash_scripts/run_all_repairing.sh
  ```

## References

Pedro Orvalho, Mikoláš Janota, and Vasco Manquinho. InvAASTCluster: On Applying Invariant-Based Program Clustering to Introductory Programming Assignments. 2022. [https://arxiv.org/pdf/2206.14175.pdf](https://arxiv.org/pdf/2206.14175.pdf)

## Introductory Programming Assignments (IPAs) Datasets 

+ [ITSP](https://github.com/pmorvalho/MultIPAs/tree/main/itsp/correct_submissions/year-1) : [https://github.com/jyi/ITSP](https://github.com/jyi/ITSP);
    - Reference: Jooyong Yi, Umair Z. Ahmed, Amey Karkare, Shin Hwei Tan, and Abhik Roychoudhury. A feasibility study of using automated program repair for introductory programming assignments. ESEC/FSE 2017. [http://jooyongyi.com/papers/Yi-ESEC-FSE17.pdf](http://jooyongyi.com/papers/Yi-ESEC-FSE17.pdf).
+ [C-Pack-IPAs](https://github.com/pmorvalho/C-Pack-IPAs) : [https://github.com/pmorvalho/C-Pack-IPAs](https://github.com/pmorvalho/C-Pack-IPAs);
    - Reference: Pedro Orvalho, Mikoláš Janota, and Vasco Manquinho. C-Pack of IPAs: A C90 Program Benchmark of Introductory Programming Assignments. 2022. [https://arxiv.org/pdf/2206.08768.pdf](https://arxiv.org/pdf/2206.08768.pdf) 


## Installation Requirements

+ Python 3.8.5
+ [pycparser](https://github.com/eliben/pycparser) : version 2.21
  ```
  pip install pycparser==2.21
  ```
+ numpy : version 1.19.2
  ```
  pip install numpy==1.19.2
  ```

+ Clara

   Clara is the program repair framework used. Clara should be installed as a submodule in the subdirectory "InvAASTCluster/clara". To install Clara, follow the instructions available on https://github.com/iradicek/clara. The user should create a conda environment called "clara" to run clara with our scripts.

+ Daikon

  Daikon was used to compute dynamically-generated likely invariants observed over several program executions for each student submission using a set of predefined input-output tests for each programming assignment. To install Daikon follow the instructions available on https://plse.cs.washington.edu/daikon/download/.
  
+ runsolver

  Runsolver was used to control the memory and CPU used and timeout while running the program clustering/repairing evaluations. To install Runsolver follow the instructions available on https://github.com/utpalbora/runsolver.


