#!/bin/bash
#SBATCH --job-name=pingpong_mpi
#SBATCH --output=pingpong_mpi.o%j
#SBATCH --partition=nu-wide
#SBATCH --ntasks=2
#SBATCH --time=00:05:00

cd $SLURM_SUBMIT_DIR

module load gcc/7.2.0
module load mpich/3.2.1-gcc-7.2.0

mpiexec -np 2 ./pingpong
