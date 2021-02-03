#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int* ptr = NULL;
	//ptr = (int*)malloc(sizeof(int) * 1);
	//if (!ptr)exit(1);

	//*ptr = 1024 * 3;
	//printf("%d\n", *ptr);

	//free(ptr);
	//ptr = NULL;

	/* 1D array*/
	//int n = 3;
	//int* ptr = (int*)malloc(sizeof(int) * n);
	//if (!ptr) exit(1);

	//ptr[0] = 123;
	//*(ptr + 1) = 456;
	//*(ptr + 2) = 789;

	//free(ptr);
	//ptr = NULL;

	///* 2D array */

	//int row = 3, col = 2;
	//int(*ptr2d)[2] = (int(*)[2])malloc(sizeof(int) * row * col);

	//for (int r = 0; r < row; r++)
	//	for (int c = 0; c < col; c++)
	//		ptr2d[r][c] = c + col + r;

	//for (int r = 0; r < row; r++)
	//{
	//	for (int c = 0; c < col; c++)
	//		printf("%d ", ptr2d[r][c]);
	//	printf("\n");
	//}

	/* using 1d arrays as 2d arrays */

	//int row = 3, col = 2;
	//int* ptr = (int*)malloc(row * col * sizeof(int));
	//if (!ptr) exit(1);

	//for (int r = 0; r < row; r++)
	//{
	//	for (int c = 0; c < col; c++)
	//		ptr[c + col * r] = c + col * r;
	//}

	//for (int r = 0; r < row; r++)
	//{
	//	for (int c = 0; c < col; c++)
	//		printf("%d ", *(ptr + c + col * r));
	//	printf("\n");
	//}

	/* using 1d array as 3d array */

	int row = 3, col = 2, depth = 2;

	int* ptr = (int*)malloc(sizeof(row * col * depth));

	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			for (int d = 0; d < depth; d++)
			{
				ptr[c + col * r * (col * row) * d] = c + col * r * (col * row) * d;
			}


}