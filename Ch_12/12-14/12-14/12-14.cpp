#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr_backup;
	printf("dummy output\n");
	{
		int n = 100000000;
		int* ptr = (int*)malloc(n * sizeof(int));

		if (!ptr)
		{
			printf("malloc() failed");
			exit(EXIT_FAILURE);
		}

		for (int i = 0; i < n; ++i)
			ptr[i] = i + 1;
		printf("dummy output");

		ptr_backup = ptr;
		free(ptr);
	}

	//what happens?
	//printf("%d %d\n", ptr_backup[0], ptr_backup[1]);
	return 0;
}