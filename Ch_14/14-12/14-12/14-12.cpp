#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char first[20];
	char last[20];
}names;

typedef struct
{
	int id;
	names name;
}person;

typedef struct
{
	int id;
	struct { char first[20]; char last[20]; };	//익명 구조체
}person2;

int main()
{
	person2 ted = { 123,{"steve","wozniak"} };
	puts(ted.first);

	return 0;
}