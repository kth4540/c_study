#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_TITLE 40
#define MAX_AUTHOR 40
#define MAX_BOOKS 3

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find=strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}	// 문자열 받는 함수

typedef struct
{
	char title[MAX_TITLE];
	char author[MAX_AUTHOR];
	float price;
}book;

int main()
{
	int count = 0;
	book library[MAX_BOOKS] = { {"empty","empty",0.0f} };
	while (1)
	{
		printf("input a book title or press [enter] to stop.\n");
		//input price
		if (s_gets(library[count].title, MAX_TITLE) == NULL)
			break;
		//break if the first character of the input title is '\0'
		if (library[count].title[0] == '\0')
			break;
		printf("input the price.\n");
		//input author
		s_gets(library[count].author, MAX_AUTHOR);

		printf("input the price.\n");
		//input price
		scanf("%f", &library[count].price);

		//clear buffer
		while (getchar() != '\n')
			continue;

		count++;

		if (count == MAX_BOOKS)
		{
			printf("no more books\n");
			break;
		}

	}
	return 0;
}