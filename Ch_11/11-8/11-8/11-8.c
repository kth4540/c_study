#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char** xp, char** yp);
void printstringarray(char* arr[], int size);
void selectionarray(char* arr[], int n);

int main()
{
	char* arr[] = { "cherry","applebee","pineapple","apple","orange" };
	int n = sizeof(arr) / sizeof(arr[0]);

	printstringarray(arr, n);
	selectionarray(arr, n);
	printstringarray(arr, n);

	return 0;
}

void swap(char** xp, char** yp)
{
	char* tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void printstringarray(char* arr[], int size)
{
	for (int i = 0; i < size; ++i)
		puts(arr[i]);
	printf("\n");
}

void selectionarray(char* arr[], int n)
{
	int min_idx = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (strcmp(arr[min_idx], arr[j]) > 0)
				min_idx = j;
		}
		swap(&arr[i], &arr[min_idx]);
		min_idx = i + 1;
	}
}