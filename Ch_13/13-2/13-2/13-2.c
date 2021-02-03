#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int ch;
	FILE* fr;	//file pointer to write
	FILE* fw;
	const char* file_name = "output.txt";
	unsigned long count = 0;
	if (argc != 2)
	{
		printf("usage:%s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fr = fopen(argv[1], "r")) == NULL)	
		//open a text file for reading
	{
		printf("can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fw = fopen(file_name, "w")) == NULL)
	{
		printf("can't open %s\n", file_name);
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

	while ((ch = fgetc(fr)) != EOF)	//getc(fr)
	{
		//putc(ch,stdout);	//same as putchar(ch);
		fputc(ch, stdout);
		fputc(ch, fw);

		count++;
	}

	fclose(fr);
	fclose(fw);

	printf("file %s has %lu characters\n", argv[1], count);
	printf("copied to %s", file_name);
	return 0;
}