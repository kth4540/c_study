#include <stdio.h>

int main()
{
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;	//2진수
	unsigned int oct = 037777777777;	//8진수
	unsigned int hex = 0xffffffff;	//16진수

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);

	printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);
	return 0;
}

//	%o= 8진수출력  %x= 16진수출력