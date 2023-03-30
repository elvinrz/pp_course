

#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

// Main routine
int main (int argc, char *argv[]){
	double sum, sum_local, time_spent = 0.0;
        int i;	
	int n = 256;
	double a [n], b[n];
	int numprocs, myid, my_first, my_last;
	
	clock_t begin = clock();
 
	// initialize MPI
	MPI_Init(&argc, &argv);	
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);	
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);	

	my_first = myid * n/numprocs;
	my_last = (myid + 1) * n/numprocs;
	
	for (i=1; i < n; i++){
		a[i] = i * 0.5;
		b[i] = i * 2.0;
	}
	
	sum_local = 0;
	for (i= my_first; i < my_last; i++){
		sum_local += a[i] * b[i];
	}
	
	MPI_Allreduce(&sum_local, &sum, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
	
	clock_t end = clock();
 
	if (myid == 0){
		time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
		printf("Sum = %f, time %f\n", sum,time_spent);
	}
	// finalize MPI
	MPI_Finalize();
	return 0;
}
