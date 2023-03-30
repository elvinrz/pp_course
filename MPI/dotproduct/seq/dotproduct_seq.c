
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main (int argc, char *argv[]){
	double time_spent = 0.0;

	double sum;
	int n = 500000;
	double a [n], b[n];
	
	clock_t begin = clock();
 
	for (int i=1; i < n; i++){
		a[i] = i * 0.5;
		b[i] = i * 2.0;
	}
	sum  = 0;
	for (int i=1; i <= n; i++){
		sum += a[i]*b[i];  
	}
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	
	printf( "Sum = %f, time: %f\n", sum, time_spent);
}
