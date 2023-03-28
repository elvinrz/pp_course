/**
 * Costa Rica National High Technology Center
 * Advanced Computing Laboratory
 * Costa Rica HPC School 2021
 * Instructor: Esteban Meneses, PhD
 * MPI ping-pong program.
 */

#include <mpi.h>                                                                
#include <stdio.h>                                                              
#include <stdlib.h>                                                             
                                                                                
int main (int argc, char *argv[]){                                             
                                                                                
  const int LIMIT = 1000;                                                         
                                                                       
  // Initialize the MPI environment                                             
  MPI_Init(&argc, &argv);                                                       
int rank; 
  // Find out rank                                                     
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);                                                                                                                                                                                                                                 
                                                                                
  int ping_pong_count = 0;                                                                                          
  while (ping_pong_count < LIMIT){                                             
    if (rank == 0){ 

              		// TO DO: send and receive message                                                                  
                                             
    }                                                                           
    else if (rank ==1){                                                        

			// TO DO: send and receive message 

    }                                                                           
  }
  // finalize MPI                                                                             
  MPI_Finalize();
  return 0;                                                               
}
