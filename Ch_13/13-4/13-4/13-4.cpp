#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 31

int main()
{
	FILE* fp;
	char words[MAX] = { '\0', };

	const char* filename = "record.txt";

	if ((fp = fopen(filename, "r+")) == NULL)
	{
		fprintf(stderr, "can't open \" %s \" file \n", filename);
		exit(EXIT_FAILURE);
	}

	//while ((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.'))
	//	fprintf(fp, "%s\n", words);

	while ((fgets(words, MAX, stdin) != NULL) && (words[0] != '.'))
		fputs(words, fp);

	//scanf 특성상 띄어쓰기를 사용하면 각각의 단어로 인식

	rewind(fp);	//go back to beginning of file

	//while (fscanf(fp, "%s", words) == EOF)
	//	fprintf(stdout, "%s\n", words);
	while (fgets(words, MAX, fp) != NULL)	//fgets는 정상적으로 끝이 나면 NULL 반환
		fputs(words, stdout);

	if (fclose(fp) != 0)
		fprintf(stderr, "error closing file\n");

	return 0;
}
