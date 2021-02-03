#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("%p\n", &a);
	printf("%d\n", &a);

	//int* ptr = 1234;	//redirection 과정에서 오류
	////runtime eror 발생 
	//printf("%p\n", ptr);
	//printf("%d\n", *ptr);

	int* safer_ptr = NULL;	// nullptr(c++)
	int a = 123;

	//	safer_ptr = &a;
	int b;
	scanf("%d", &b);
	if (b % 2 == 0)
		safer_ptr = &b;
}