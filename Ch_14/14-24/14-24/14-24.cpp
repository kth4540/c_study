#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int tmp(int a)
{
	return 0;
}

int (*g(int a))(int)
{
	return tmp;
}

int main()
{
	/*
		* indicates a pointer
		() indicates a function
		[] indicates an array

		�켱���� : (), [] > *
	*/

	int* ap[10];
	typedef int* pint;
	pint ap2[10];

	float* fp(float);

	typedef float* pfloat;
	pfloat fp2(float);

	void(*pf)(int);

	/*
		  1			->pointer to
			    2	-> function with int argument
	  3				-> returning void

	  ->parameter�� int type�� �ް� ��ȯtype�� void�� �Լ��� ���� ������
	*/

	int* (*x[10])(void);
	/*
		      1			->array of
		   2			->pointers to
					3	->functions with no arguments
	 4					-> returning pointer to int

	 -> parameter�� ����
	 int�� ���� �����͸� ��ȯ�ϴ�
	 �Լ��� ���� �������� �迭 
	*/

	/*a function can't return an array*/
	//int f(int)[]; -> wrong

	/*it can return a pointer to an array*/
	int(*f(int))[];

	/* a function can't return a function */
	//int g(int)(int);	->wrong

	/*it can return a pointer to a function*/
	int (*g(int))(int);

	/*an array of functions aren' possible*/
	//int a[10](int);	-> wrong

	/*an array of function pointers are possible*/
	int(*x2[10])(int);

	/*using typedef to simplify declaration*/

	typedef int* FCN(void);
	typedef FCN* FCN_PTR;
	typedef FCN_PTR FCN_PTR_ARRAY[10];
	FCN_PTR_ARRAY x3;
}