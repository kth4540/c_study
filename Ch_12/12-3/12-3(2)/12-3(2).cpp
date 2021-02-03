#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Variable scopes (visibility)
	- block, function, function prototype, file.
*/

void f1(int, double);



double func_block(double d)
{
	double p = 0.0;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		double q = d * i;
		p *= q;
		if (i == 5)
			goto hello;
	}
hello:
	printf("hello world");

	return p;
}

int main()
{
	func_block(1.0);
}

void f1(int hello, double world)
{
}

//void vla_param(int n, int m, double ar[n][m])
//{
//
//}