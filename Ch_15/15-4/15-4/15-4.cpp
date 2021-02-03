#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main()
{
	unsigned char a = 6;
	unsigned char b = 5;

	printf("%hhu\n", a);
	print_binary(a);

	printf("%hhu\n", b);
	print_binary(b);

	printf("%hhu\n", a & b);
	print_binary(a & b);

	printf("%hhu\n", a | b);
	print_binary(a | b);

	printf("%hhu\n", a ^ b);
	print_binary(a ^ b);

	printf("%hhu\n", ~a);
	print_binary(~a);


	return 0;
}
unsigned char to_decimal(const char bi[])
{
	unsigned char sum = 0;
	const size_t size = strlen(bi);

	for (size_t s = 0; s < size; s++)
		if (bi[s] == '1')
			sum += (int)pow(2, size - 1 - s);
		else if (bi[s] != '0')
		{
			printf("wrong number\n");
			exit(1);
		}
	return sum;
}

void print_binary(const unsigned char num)
{

	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const unsigned char mask =
			(unsigned char)pow((double)2, (double)(bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}