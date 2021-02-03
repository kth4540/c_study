#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	//getchar(), putchar()

int main()
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		//if (ch >= '0' && ch <= '9')	//	||: 논리연산자 (or), &&: 논리연산자(and)
		//	ch = '*';
		//putchar(ch);

		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		else if (ch >= 'A' && ch <= 'Z')
			ch += 32;
		putchar(ch);
	}
	return 0;
}