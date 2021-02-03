#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	// memcpy
#include "Header.h"


//const double gravity = 9.8;
//const double PI = 3.141592;

int main()
{
	double area_circle = PI * 2.0f * 2.0f;


	/*
		Qualified types
		const, volatile, restrict, _Atomic
	*/

	/*
		const
	*/

	// C99 ideompotent

	const int n = 6;
	typedef const int zip;
	const zip q = 8;

	const int j = 123;
	const int arr[] = { 1,2,3 };

	float f1 = 3.14f, f2 = 1.4f;

	const float* pf1 = &f1;
	//*pf1=5.0f		-> error
	pf1 = &f2;

	float* const pf2 = &f1;
	*pf2 = 6.0f;
	//pf2 = &f2;	-> error

	const float* const pf3 = &f1;
	//*pf3=7.0f;	-> errpr
	//pf3=&pf2		-> error





	/*
		Global constants
	*/

	/*
		volatile
		- Do not optimize
		- (ex: hardward clock)
	*/

	volatile int vi = 1;
	volatile int* pvi = &vi;

	int i1 = vi;
	//	.....
	int i2 = vi;


	/*
		restrict (__restrict in VS)
		- sole initial means of accessing a data object
		- compiler can't check this restriction
	*/

	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* par = ar;

	int* __restrict restar = (int*)malloc(10 * sizeof(int));
	if (!restar) exit(1);

	restar[0] += 3;
	restar[0] += 5;
	//restar[0]+=8;

	return 0;
}