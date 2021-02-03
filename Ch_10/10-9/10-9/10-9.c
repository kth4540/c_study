#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
		pointer operations
		- assignment
		- value finding(dereferencing)
		- taking a pointer address
		- adding an integer to a pointer
		- incrementing a pointer
		- subtracting an integer from a pointer
		- decrementing a pointer
		- differencing
		- comparisons
	*/

	int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;
	
	ptr1 = arr;	//assignment ( 배열은 이름 자체로 주소임)

	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);
	// dereferencing, taking a pointer class
	// *를 붙여서 포인터가 가리키는 주소의 값을 가져옴

	ptr2 = &arr[2];	//address-of  operator &

	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	ptr3 = ptr1 + 4;	//adding an integer to a pointer
	// 4byte 가 4개 저장될 수 있는 공간만큼 더함(단순 정수 4 더하기 아님)

	//differencing
	printf("%td\n", ptr3 - ptr1);	//t is for pointer difference
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);
	ptr3 = ptr3 - 4;	// subtracting an integer from a pointer
						// 더하기와 같은 맥락

	ptr1++;
	ptr1--;
	--ptr1;
	++ptr1;

	if (ptr1 == ptr3)
		printf("same\n");
	else
		printf("different\n");

	double d = 3.14;
	double* ptr_d = &d;
	if (ptr1 == ptr_d)	//warning 
		printf("same\n");
	else
		printf("different\n");

	return 0;

}