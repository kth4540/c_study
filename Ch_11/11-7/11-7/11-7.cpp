#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* selection sort */

void swap(int* xp, int* yp);
void printarray(int arr[], int size);
void selectionsort(int arr[], int n);

int main()
{
	int arr[] = { 64,25,12,22,11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionsort(arr, n);

	printarray(arr, n);
	return 0;
}

void swap(int* xp, int* yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void printarray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void selectionsort(int arr[], int n)
{
	int min_idx = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[min_idx] > arr[j])
				min_idx = j;
		}
		swap(&arr[i], &arr[min_idx]);
		min_idx = i + 1;
	}
}