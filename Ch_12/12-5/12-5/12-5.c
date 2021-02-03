#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	automatic tosrage class
	-automatic storage duration, block scope, no linkage
	-any variable declared in a block or function header
*/

void func();
int main()
{
	auto int a;	// keyword auto : a storage-class specifier
	a = 1024;
	printf("%d\n", a);
	auto int b = a * 3;

	int i = 1;
	int j = 2;

	printf("i=%lld\n", (long long)&i);
	{
		int i = 3; //name hiding
		printf("i=%lld\n", (long long)&i);

		int ii = 123;
		printf("j=%d\n", j);
	}
	//ii is not visible here

	for (int m = 1; m < 2; m++)
		printf("m %lld\n", (long long)&m);

	func(5);

	for (int m = 3; m < 4; m++)
	{
		printf("m %lld\n", (long long)&m);
	}

	//j is visible here
	return 0;
}

void func(int k)
{
	int i = k * 2;
	printf("i %lld\n", (long long)&i);
}