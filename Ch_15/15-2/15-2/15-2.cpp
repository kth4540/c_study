#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
unsigned char to_decimal(const char bi[]);

int main()
{
	printf("binary(string)to decimal conversion\n");

	printf("%d\n", to_decimal("00000110"));
	printf("%d\n", to_decimal("00010110"));

	//^ means power in math.
	//(int)pow(2,3)==8

	printf("%d\n", to_decimal("10010100"));

	return 0;

}

unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;
	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);
		else if (bi[i] != '0')
		{
			printf("wrong character:%c", bi[i]);
			exit(1);
		}
	}
	return sum;
}