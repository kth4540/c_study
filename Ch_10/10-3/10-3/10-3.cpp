#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long* ptr = 0;	//try double* ,int* char*, void*

	//printf("%d",*ptr)	//error in this lecture

	printf("%p %lld\n", ptr, (long long)ptr);

	ptr += 2;	// 자료형 size 만큼 증가

	printf("%p %lld\n", ptr, (long long)ptr);
	// long long type size 가 8이므로 8 증가

//	ptr = -ptr;  -> not working
//	ptr = +ptr;  -> not working

	/* subtraction */

	double arr[10];
	double* ptr1 = &arr[3], * ptr2 = &arr[5];

	//int* ptr3 = ptr1 + ptr2;	-> not working (no meaning)
	int i = ptr2 - ptr1;// -> working, why?
	// -> 주소 간격 차이를 이용할 수 있음

	printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);
}