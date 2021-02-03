#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 101

typedef struct
{
	char name[SLEN];
	char author[SLEN];
}book;

void print_books(const book books[], int n);

int main()
{
	//book my_books[3];
	book* my_books = (book*)malloc(sizeof(book) * 3);
	my_books[0] = (book){ "the great gatsby","f.scott" };
	my_books[1] = (book){ "hamlet","tom" };
	my_books[2] = (book){ "hello","clancy" };

	print_books(my_books, 3);

	return 0;
}

void print_books(const book* books, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%s %s\n", &books[i].name, &books[i].author);
	}
}