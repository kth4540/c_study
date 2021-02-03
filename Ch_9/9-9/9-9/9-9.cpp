#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	10
	10/2=5,remainder=0
	5/2=2,remainder=1
	2/2=1, remainder=0
	1/2=0,remainder=0
*/

void print_binary(unsigned long u);
void print_binary_loop(unsigned long u);

int main()
{
	unsigned long num = 19;

	print_binary(num);
	printf("\n");
	print_binary_loop(num);

	return 0;
}

void print_binary(unsigned long u)
{
	if (u / 2 != 0)
		print_binary(u / 2);

	printf("%lu ", u % 2);	// 결과가 거꾸로 나옴
}

void print_binary_loop(unsigned long u)
{
	unsigned long i;

	for (i = u; (i / 2) != 0; i /= 2)
		printf("%d ", i % 2);

	printf("%d ", i % 2);
}