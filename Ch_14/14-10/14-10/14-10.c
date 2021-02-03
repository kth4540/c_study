#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXTITL 41
#define MAXAUTL 31

typedef struct
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float price;
}book;

typedef struct
{
	double width;
	double height;
}rectangle;

double rect_area(rectangle r)
{
	return r.width * r.height;
}

double rect_area_ptr(rectangle* r)
{
	return r->width * r->height;
}

int main()
{
	book book_to_read = { "crime and punishment","fyodor dostoyvsky",11.25f };

	strcpy(book_to_read.title, "alice");

	book book2 = { "alice in wonderland","lewis carroll",20.3f };
	book_to_read = book2;
	book_to_read = (book){ "alice in wonderland","lewis carroll",20.3f };

	printf("%s %s\n", book_to_read.title, book_to_read.author);

	rectangle rec1 = { 1.0,2.0 };
	double area = rect_area(rec1);
	area = rect_area((rectangle) { 1.0, 2.0 });

	area = rect_area_ptr(&(rectangle) { .height = 3.0, .width = 2.0 });

	return 0;
}