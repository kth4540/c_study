#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;
	x > y + 2;
	x > (y + 2);

	x = y > 2;
	x = (y > 2);

	z = x > y;
	z = (x > y);

	x != y == z;
	(x != y) == z;

	return 0;
}