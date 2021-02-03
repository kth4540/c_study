#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);

	if (number > 5)
		if (number < 10)
			printf("Larger than 5 smaller than 10\n");
		else
			printf("Larger than 10");
	else
		printf("Less than or equal to 5");	// 들여쓰기 주의

	//compilers ignore indenting
	return 0;
}