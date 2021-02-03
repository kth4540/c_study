#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SLEN 101

typedef struct
{
	char name[SLEN];
	char author[SLEN];
}book;

void print_books(const book* books, int n);
void write_books(const char* filename, const book* books, int n);
book* read_books(const char* filename, int* n);
void read_books2(const char* filename, book** books_ptr, int* n);

int main()
{
	int tmp;
	int n = 3;

	book* my_books = (book*)malloc(sizeof(book) * n);
	if (!my_books)
	{
		printf("malloc failed");
		exit(1);
	}

	my_books[0] = { "gatsby","scott" };
	my_books[1] = { "hamlet","william" };
	my_books[2] = { "odyssey","homer" };

	print_books(my_books, n);

	printf("\nwriting to a file.\n");
	write_books("hou.txt", my_books, n);
	free(my_books);
	n = 0;
	printf("done\n");

	printf("\n press any key to read data from a file.\n");
	tmp = _getch();

//	my_books = read_books("hou.txt", &n);
	read_books2("hou.txt", &my_books, &n);
	print_books(my_books, n);
	free(my_books);
	n = 0;
	return 0;
}

void print_books(const book* books, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("book %d title : %s, author : %s\n"
		, i, books[i].name, books[i].author);
	}
}

void write_books(const char* filename, const book* books, int n)
{
	
	FILE* fp = fopen(filename, "w");
	if (fp == NULL)
	{
		printf("can't open file");
		exit(1);
	}
	fprintf(fp, "%d\n", n);

	for (int i = 0; i < n; ++i)
		fprintf(fp, "%s\n%s\n", books[i].name, books[i].author);

	fclose(fp);
}

book* read_books(const char* filename, int* n)
{
	FILE* fp = fopen(filename, "r");
	
	int flag;
	flag = fscanf(fp, "%d%*c", n);
	if (flag != 1)
	{
		printf("file read failed");
		exit(1);
	}

	book* books = (book*)calloc(sizeof(book) ,* n);

	if (books==NULL)
	{
		printf("malloc() failed");
		exit(1);
	}

	for (int i = 0; i < *n; ++i)
	{
		flag = fscanf(fp, "%[^\n]%*c %[^\n]%*c",
			books[i].name, books[i].author);

		if (flag != 2)
		{
			printf("file read failed");
			exit(1);
		}
	}
	fclose(fp);

	return books;
}

 void read_books2(const char* filename, book** books_ptr, int* n)
{
	 FILE* fp = fopen(filename, "r");

	 if (fp == NULL)
	 {
		 printf("can't open file.");
		 exit(1);
	 }

	 int flag;
	 flag = fscanf(fp, "%d%*c", n);
	 if (flag != 1)
	 {
		 printf("file read failed");
		 exit(1);
	 }
	 
	 book* books = (book*)calloc(sizeof(book), *n);

	 if (!books)
	 {
		 printf("malloc() failed");
		 exit(1);
	 }

	 for (int i = 0; i < *n; ++i)
	 {
		 flag = fscanf(fp, "%[^\n]%*c %[^\n]%*c",
			 books[i].name, books[i].author);

		 if (flag != 2)
		 {
			 printf("file read failed");
			 exit(1);
		 }
	 }
	 fclose(fp);

	 *books_ptr = books;
}