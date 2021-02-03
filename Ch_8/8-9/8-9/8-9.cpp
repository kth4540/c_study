#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";

	file = fopen(file_name, "r");
	if (file == NULL)
	{
		printf("failed to open file.\n");
		exit(1);	// exit(int);	-> 프로그램을 강제로 종료시킴
	}

	while ((c = getc(file)) != EOF)
		putchar(c);
	fclose(file);

	return 0;
}