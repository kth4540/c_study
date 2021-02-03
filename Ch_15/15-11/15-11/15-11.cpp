#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void char_to_binary(unsigned char uc)
{
	const int bits = CHAR_BIT * sizeof(unsigned char);
	for (int i = bits - 1; i >= 0; i--)
		printf("%d", (uc >> i) & 1);
}

void print_binary(char* data, int bytes)
{
	for (int i = 0; i < bytes; ++i)
		char_to_binary(data[bytes - 1 - i]);
	printf("\n");
}
int main()
{
	struct
	{
		bool option1 : 7;
		bool option2 : 1;
	}bbf;
	printf("%zu bytes\n", sizeof(bbf));

	struct
	{
		unsigned short option1 : 8;
		unsigned short option2 : 7;
		unsigned short option3 : 1;
	}usbf;
	printf("%zu bytes\n", sizeof(usbf));

	struct
	{
		unsigned int option1 : 1;
		unsigned int option2 : 1;
	}uibf;
	printf("%zu bytes\n", sizeof(uibf));

	//자료형의 최대 단위로 메모리 배정
	return 0;
}
