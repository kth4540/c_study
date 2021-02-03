#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	loop vs recursion
	factorial 3!=3*2*1, 0!=1
*/

long loop_factorial(int n);
long recursion_factorial(int n);

int main()
{
	int num = 5;

	//printf("%d\n", loop_factorial(num));
	printf("%d\n", recursion_factorial(num));

	return 0;
}

long loop_factorial(int n)
{
	long fac;
	for (fac=1; n> 1; --n)
		fac *= n;
	return fac;
}

long recursion_factorial(int n)
{
	if (n > 1)
	{
		return n * recursion_factorial(n - 1);
	}
	else
		return 1;
}