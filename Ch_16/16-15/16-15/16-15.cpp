#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int divide(int a, int b);

int main()
{
	int a, b;
	int f = scanf("%d%d", &a, &b);

	printf("a/b=%d ", divide(a, b));

	return 0;
}

int divide(int a, int b)
{
	assert(b != 0);

	return a / b;
}