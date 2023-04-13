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
	int rank, size;
	int token = 0;
	int token_recv = 0;
	// initialize MPI
	MPI_Init(&argc, &argv);	
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);	
	MPI_Comm_size(MPI_COMM_WORLD, &size);	


	
	if (rank == 0){
		token = -1;
		MPI_Send(&token, );
		MPI_Recv(&token_recv, );
		printf("Rank %d received from %d the token %d\n", rank, size-1, token_recv);
	}else{
		MPI_Recv(&token, );
		if (rank == size-1){
			MPI_Send(&token,);
		}else{
			MPI_Send(&token,);
			printf("Token sent from %d to %d\n", rank, rank+1);
		}
		
	}
	

	// finalize MPI
	MPI_Finalize();
	return 0;
}
