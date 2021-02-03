#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* two of 1d arrays */
	//int arr0[3] = { 1,2,3 };
	//int arr1[3] = { 4,5,6 };

	//int* parr[2] = { arr0,arr1 };	//array of pointers

	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//		printf("%d(==%d, %d %d) ", parr[j][i], *(parr[j] + i),
	//			*(*(parr + j) + i), 
	//			(*(parr + j))[i]);
	//	printf("\n");
	//}

	/* 2d arrays are arrays of 1d arrays */
	//int arr[2][3] = { {1,2,3},{4,5,6} };
	//int* parr0 = arr[0];
	//int* parr1 = arr[1];

	//for (int i = 0; i < 3; ++i)
	//	printf("%d ", parr0[i]);
	//printf("\n");

	//for (int i = 0; i < 3; ++i)
	//	printf("%d ", parr1[i]);

	/* arrays of pointers works like a 2d array */

	//int arr[2][3] = { {1,2,3},{4,5,6} };
	//int* parr[2];
	//parr[0] = arr[0];
	//parr[1] = arr[1];

	//for (int j = 0; j < 2; ++j)
	//{
	//	for (int i = 0; i < 3; ++i)
	//		printf("%d %d %d %d\n",
	//			arr[j][i], parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
	//	printf("\n");
	//}
	//// *(*(parr + j) + i)
	//// 1. *(parr+j)이 1차적으로 indirection  -> parr+j도 주소값
	//// 2. *(*(parr + j) + i)이 2차적으로 indirection -> 원소값

	//printf("\n");

	//printf("%p\n", &parr[0]);	// 포인터 자체의 주소
	//printf("%p\n", parr[0]);	// 포인터가 가리키는 주소(&parr[0]과 다름)
	//printf("%p\n", arr);		// &arr[0] 대신 가능하지만 별도의 주소 저장 메모리는 갖지 않음
	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr[0]);
	//printf("%p\n", &arr[0][0]);


	/* array of string of diverse lengths example */

	char* name[] = { "aladdin","jasmine","magic carpet","genie" };
	// 각각 a,j,m,g(각각의 문자열 첫번째)가 있는 위치가 저장됨

	const int n = sizeof(name) / sizeof(char*);

	for (int i = 0; i < n; ++i)
		printf("%s at %u\n", name[i], (unsigned)name[i]);	//ull in x64
	printf("\n");

	char aname[][15] = { "aladdin","jasmine","magic carpet","genie" ,"jafar" };
	const int an = sizeof(aname) / sizeof(char[15]);

	for (int i = 0; i < an; ++i)
		printf("%s at %u\n", aname[i], (unsigned)&aname[i]);
	printf("\n");
}