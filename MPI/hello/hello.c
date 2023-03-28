/**
 * Costa Rica National High Technology Center
 * Advanced Computing Laboratory
 * Costa Rica HPC School 2021
 * Instructor: Esteban Meneses, PhD
 * MPI hello world program
 */

#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

// Main routine
int main (int argc, char *argv[]){
	int rank, size;

	// initialize MPI
	MPI_Init(&argc, &argv);	
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);	
	MPI_Comm_size(MPI_COMM_WORLD, &size);	

	printf( "Hello world from rank %d of %d\n", rank, size);

	// finalize MPI
	MPI_Finalize();
	return 0;
}
