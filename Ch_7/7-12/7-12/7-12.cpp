#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int main()
{
	char c;
	while ((c = getchar()) != '.')
	{
		printf("You love ");
		switch (c)	//integer types only(char, int,....)
		{
		case 'a':
		case 'A':
			printf("apple");
			break;
		case 'b':
		case 'B':
			printf("baseball");
			break;
		case 'c':
		case 'C':
			printf("cake");
			break;
		default:
			printf("nothing");
		}

		while (getchar() != '\n')
			continue;
		// c�� �´� case�� jump
		// break �� ������ jump�� �ٺ��� ��� ����
	}


}