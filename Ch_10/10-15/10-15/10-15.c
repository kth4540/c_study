#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* pointer compatibility */

	//int n = 5;
	//double x;
	//x = n;	// no error
	//int* p1 = &n;
	//double* pd = &x;
	//pd = p1;	//warning

	//int* pt;
	//int(*pa)[3];
	//int ar1[2][3] = { 3, };
	//int ar2[3][2] = { 7 , };
	//int** p2;

	//pt = &ar1[0][0];	// pointer to int

	//pt = ar1[0];	// pointer to int
	////pt=ar1;	// error
	//pa = ar1;	//pointer to int[3]
	////pa=ar2;	//error

	//p2 = &pt;	//pointer to int*
	//*p2 = ar2[0];	//pointer to int
	//p2 = ar2;	//error

	// p2: pointer to pointer to int
	// ar2: a pointer to array of two ints

	/* pointer and const */

	//int x = 20;
	//const int y = 23;
	//int* p1 = &x;
	//const int* p2 = &y;	
	//// * 앞의 const 의미 : indirection 한 값을 바꿀 수 없음
	//// * 뒤의 const 의미 : pointer 가 가리키는 주소를 바꿀 수 없음
	//const int** pp2 = &p1;
	//p1 = p2;	//error
	//p2 = p1;

	//int x2 = 30;
	//int* p3 = &x2;
	//*pp2 = p3;
	//pp2 = &p1;

	//const int** pp2;
	//int* p1;
	//const int n = 13;
	//pp2 = &p1;
	//*pp2 = &n;
	//*p1 = 10;	//n이 const 로 선언되었지만 n 값이 바뀜

	/* c const and c++ const */
	const int y;
	const int* p2 = &y;
	int* p1;
	p1 = p2;	//error in cpp -> const가 회피됨(권장하지 않음)

	return 0;
}