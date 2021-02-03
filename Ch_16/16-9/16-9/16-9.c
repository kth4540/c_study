#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
#pragma tokens(ex: once)
*/

//#pragma pack(1)	// padding size
//#pragma warning(disable:4477)
//#pragma warning(error:4477)
struct s
{
	int i;
	char ch;
	double d;
};


int main()
{
	struct s A;
	printf("size of A is %d\n", sizeof(A));

	return 0;

}