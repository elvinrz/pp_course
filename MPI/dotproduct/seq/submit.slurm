#!/bin/bash
#SBATCH --job-name=dotproduct_seq
#SBATCH --output=dotproduct_seq.o%j
#SBATCH --partition=nu-wide
#SBATCH --ntasks=8
#SBATCH --time=00:05:00

cd $SLURM_SUBMIT_DIR

module load gcc/11.1.0

./dotproduct_seq
