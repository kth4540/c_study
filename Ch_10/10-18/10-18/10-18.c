#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define cols 4

int sum_1d(int* arr, int n);
int sum_2d(int arr[][cols], int rows);

int main()
{
	int a = 1;
	3;	//literals are constants that aren't symbolic
	3.14f;
	int b[2] = { 3,4 };
	(int[2]) {3, 4};	//compound literal

	int arr1[2] = { 1,2 };
	int arr2[2][cols]={ {1,2,3,4},{5,6,7,8} };

	printf("%d\n", sum_1d(arr1, 2));
	printf("%d\n", sum_2d(arr2, 2));
	printf("\n");

	printf("%d\n", sum_1d((int[2]){1, 2}, 2));	// literal 값 입력 가능
	printf("%d\n", sum_2d((int[2][cols]) { {1, 2, 3, 4}, { 5,6,7,8 } }, 2));

	int* ptr1;
	int(*ptr2)[cols];

	ptr1 = (int[2]){ 1,2 };
	ptr2 = (int[2][cols]){ {1,2,3,4},{5,6,7,8} };
}

int sum_1d(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; ++i)
	{
		total += arr[i];
		return total;
	}
}

int sum_2d(int arr[][cols], int rows)
{
	int total = 0;
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < cols; c++)
			total += arr[r][c];
	return total;
}