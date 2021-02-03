#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_long(void);

int main()
{
	printf("please input an integer and press enter.\n");
	
	long number;
	while (1)
	{
		number = get_long();
		if (number > 1 && number < 100)
		{
			printf("OK\n");
			break;
		}
		else
			printf("wrong input\n");
	}
	
	return 0;
}

long get_long(void)
{
	long input;
	char c;

	while (scanf("%ld", &input) != 1)
		//scanf()의 반환값은 제대로(type 에 맞게) 입력받은 값의 수 
	{
		printf("your input - ");

		while ((c = getchar()) != '\n')
			putchar(c);	// input left in buffer

		printf(" - is not an integer.\n");
	}
	printf("your input %ld is an integer.\n", input);

	return input;
}