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
		//scanf()�� ��ȯ���� �����(type �� �°�) �Է¹��� ���� �� 
	{
		printf("your input - ");

		while ((c = getchar()) != '\n')
			putchar(c);	// input left in buffer

		printf(" - is not an integer.\n");
	}
	printf("your input %ld is an integer.\n", input);

	return input;
}