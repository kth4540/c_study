#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int myfunc() {};

int main()
{
	/*namespace*/
	{
		int myname = 345;
		//double myname=3.14;	//error
	}

	typedef struct
	{
		double x;
		double y;
	}rect;

	//int rect = 123;	ok in c(not ok in c++)
	//rect rect = { 1.1,2.2 };	//different categories

	//typedef struct rect rect;
	//rect rect=={1.1,2.2}	// not ok

//	int myfunc = myfunc();	->error


}