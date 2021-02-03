
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	unsigned int i = 0b11111111111111111111111111111111;	//0b -> 2진수 입력
	unsigned int u = UINT_MAX;
	signed int z = INT_MAX;
	signed int k = INT_MIN;

	unsigned int ov = UINT_MAX + 1;	// 오버플로우
	// 1111+1 = 0000
	// 0000-1 = 1111
	
	printf("%u\n", sizeof(unsigned int)); //%u-> unsigned
	printf("%u", sizeof(i));

	printf("%u\n", i);
	printf("%u\n", u);
	printf("%d\n", z);
	printf("%d\n", k);

	printf("%u\n", ov);

	// i to binary representation
	char buffer[33];
	 _itoa(ov, buffer, 2);

	//print decimal and binary
	printf("decimal: %u\n", ov);
	printf("binary: %s\n", buffer);

	return 0;
}