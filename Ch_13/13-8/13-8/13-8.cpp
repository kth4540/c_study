#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	FILE* fp = fopen("test.txt", "rb");

	unsigned char ch;
	SetConsoleOutputCP(CP_UTF8);

	while (fread(&ch, sizeof(char), 1, fp) > 0)
		printf("%hhu %c\n", ch,ch);

	fclose(fp);

	return 0;
}