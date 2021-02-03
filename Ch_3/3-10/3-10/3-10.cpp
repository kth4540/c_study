#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char c = 'A';
	char d = 65; //d='A'

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);

	printf("%c\n", c + 1);

	char a = '\a';
	//printf("%c", a);
	printf("\x7");

	float salary;
	//printf("$______\b\b\b\b\b\b");	//->\b = 커서 뒤로
	//scanf_s("%f", &salary);
	printf("AB\tCDEF\n");	//\t = 줄맞춤
	printf("ABC\tDEF\n");

	printf("\\ \'HA\' +  \"Hello\" \?\n ");	//-> \\ \' \" \? 문자열로 표현
}