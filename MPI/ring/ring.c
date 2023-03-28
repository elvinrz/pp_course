/**
 * Costa Rica National High Technology Center
 * Advanced Computing Laboratory
 * Costa Rica HPC School 2021 
 * Instructor: Esteban Meneses, PhD
 * MPI ring computation program.
 */

#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FLAG 7

// Main routine
int main (int argc, char *argv[]){
	int rank, size, number, counter;

	// initialize MPI
	MPI_Init(&argc, &argv);	
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);	
	MPI_Comm_size(MPI_COMM_WORLD, &size);	

	// generating random number
	srand(time(NULL) * rank);//seed
	number = rand() % size;
	counter = 0;
	
	// computing sum of all numbers in the system
	for(int i=0; i<size; i++){

		// TO DO: circulate numbers around (use variable number to send and receive values) 
		
		// accumulate number
		counter += number;
	}
	printf("[%d] Total sum: %d\n", rank, counter);

	// finalize MPI
	MPI_Finalize();
	return 0;
}
