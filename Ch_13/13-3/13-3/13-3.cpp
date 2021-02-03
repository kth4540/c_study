#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>	//SetConsoleOutputCP()

int main(int argc, char* argv[])
{
	const UINT default_cp = GetConsoleOutputCP();
	int ch;
	FILE* fr;	//file pointer to write
	FILE* fw;
	const char* infile_name = "원본.txt";
	const char* outfile_name = "사본.txt";
	unsigned long count = 0;
	//if (argc != 2)
	//{
	//	printf("usage:%s filename\n", argv[0]);
	//	exit(EXIT_FAILURE);
	//}

	if ((fr = fopen(infile_name, "r")) == NULL)
		//open a text file for reading
	{
		printf("can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fw = fopen(outfile_name, "w")) == NULL)
	{
		printf("can't open %s\n", outfile_name);
		exit(EXIT_FAILURE);
	}
	//open a text file for reading
/*
	fopen modestrings for text files
	-r : reading
	-w : creating and writing or over-writing
	-a : appending or creating and writing
	-r+ : both reading and writing
	-w+ : reading andwriting, over-writing or creating
	-a+ : reading and writing, appending or creating
*/

	SetConsoleOutputCP(CP_UTF8);

	while ((ch = fgetc(fr)) != EOF)	//getc(fr)
	{
		//putc(ch,stdout);	//same as putchar(ch);
		fputc(ch, stdout);
		fputc(ch, fw);

		count++;
	}

	fclose(fr);
	fclose(fw);

	SetConsoleOutputCP(default_cp);

	printf("file %s has %lu characters\n", argv[1], count);
	printf("copied to %s", outfile_name);

	printf("한글 출력 확인\n");
	return 0;
}