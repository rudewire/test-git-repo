#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define ARRAY_SIZE_MAX 3

double
rms(double* array, size_t n)
{
	double sum = 0.0;

	for(int i = 0; i < ARRAY_SIZE_MAX; i++)
	{
		sum += array[i] * array[i];		
	}

	return(sqrt(sum/n));
}

void
main (void)
{
	double arr[ARRAY_SIZE_MAX] = {1.0, 2.0, 3.0};

	printf("\nThe rms of array is: %0.8f\n\n", rms(arr, ARRAY_SIZE_MAX));
}
