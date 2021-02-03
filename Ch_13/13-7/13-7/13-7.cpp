#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp;
	int ch;
	/* ungetc() */
	//fp = fopen("input.txt", "r");
	//ch = fgetc(fp);
	//fputc(ch,stdout);

	//ungetc((int)'A', fp);

	//ch = fgetc(fp);
	//fputc(ch,stdout);

	//ch = fgetc(fp);
	//fputc(ch, stdout);

	/*setvbuf()*/
	//fp = fopen("input.txt", "r");
	//char buffer[32] = { '\0', };

	//setvbuf(fp, buffer, _IOFBF, sizeof(buffer));
	//
	//ch = fgetc(fp);	//read just one

	//for (int i = 0; i < sizeof(buffer); i++)
	//	printf("%c", buffer[i]);
	//printf("\n");

	/*fflush()*/
	//fflush(fp);
	//-> 버퍼를 비움

	return 0;

}