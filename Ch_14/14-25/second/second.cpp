#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[100];
	int height;
}kid;

int compare(const void* first, const void* second);

int main()
{
	kid my_friends[] =
	{ "jack",40,"genie",300,"aladin",170,"piona",150 };

	const int n = sizeof(my_friends) / sizeof(kid);

	qsort(my_friends, n, sizeof(kid), compare);

	for (int i = 0; i < n; i++)
		printf("%s\t%d\n", my_friends[i].name, my_friends[i].height);

	return 0;
}

int compare(const void* first, const void* second)
{
	if (((kid*)first)->height > ((kid*)second)->height)
		return 1;
	else if (((kid*)first)->height > ((kid*)second)->height)
		return -1;
	else
		return 0;
}