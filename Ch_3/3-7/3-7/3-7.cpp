#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000u;
	long l = 65537l;
	long long ll = 1234567890642ll;

	printf("char=%hhd,%d,%c\n", c, c, c); //-> %hhd=숫자, %c=문자
	printf("short=%hhd,%hd,%d\n", s, s, s);//
	printf("unsigned int=%u,%d\n", ui, ui);
	printf("long=%ld,%hd\n", l, l);
	printf("long long=%lld,%;d\n", ll, ll);
	// 각각 오버플로우 되서 제대로 표현되지 않음
	return 0;
}