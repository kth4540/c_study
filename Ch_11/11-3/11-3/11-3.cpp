#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* arrays of character string */

	const char* mythings[5]={
		"dancing in the rain",
		"couting apples",
		"watching movies with friends",
		"writing sad letters",
		"studying the c language" };
	// -> text segment

	char yourthings[5][40] = {
		"studying the c++ language",
		"eating",
		"watching netflix",
		"walking around dark",
		"deleting spam emails"
	};
	//	-> stack 

	const char* temp1 = "dancing in the rain";	//text segment
	const char* temp2 = "studying the c++ language";	//text segment

	printf("%s %u %u\n", mythings[0], (unsigned)mythings[0], (unsigned)temp1);
	printf("%s %u %u\n", yourthings[0], (unsigned)yourthings[0], (unsigned)temp2);

	printf("\nsizeof mythings : %zd, sizeof yourtings : %zd\n",
		sizeof(mythings), sizeof(yourthings));

	for (int i = 0; i < 100; i++)
		printf("%c", mythings[0][i]);

	for (int i = 0; i < 200; i++)
		printf("%d", (int)yourthings[0][i]);

	for (int i = 0; i < 200; i++)
		printf("%c", yourthings[0][i]);

	// not a good idea to take advantage of this property

	printf("\n");

	return 0;
}

