#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	printf("Input a positive integer : ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("Even");
	else   // �б⹮
		printf("Odd");

	return 0;


}