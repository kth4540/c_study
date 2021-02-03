#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x;
	char str[] = "dancing with a star";

	int arr[100];
	/*
		malloc() returns a void type pointer
		void* : generic pointer

		free() deallocates the memory
	*/

	double* ptr = NULL;
	ptr = (double*)malloc(30 * sizeof(double));

	if (ptr == NULL)
	{
		puts("memory allocation failed");
		exit(EXIT_FAILURE);

		//exit(EXIT_FAILURE) is similar to return 1 int main()
		//exit(EXIT_SUCCESS) is similar to return 0 int main()
	}

	printf("before free %p\n", ptr);
	
	free(ptr);

	printf("After free %p\n", ptr);

	ptr = NULL;

	/* dynamically allocated array */

	int n = 5;
	ptr = (double*)malloc(n * sizeof(double));

	if (ptr != NULL)
	{
		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");

		for (int i = 0; i < n; ++i)
			*(ptr + i) = (double)i;

		for (int i = 0; i < n; ++i)
			printf("%f ", ptr[i]);
		printf("\n");
	}

	free(ptr);
	ptr = NULL;

	return 0;
}