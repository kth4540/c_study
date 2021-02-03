#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	/* flexible array member */

	typedef struct
	{
		size_t count;
		double average;
		double values[];	//flexible array member(last member)
	}flex;

	const size_t n = 3;

	flex* pf = (flex*)malloc(sizeof(flex) + n * sizeof(double));
	if (pf == NULL) exit(1);

	return 0;
}