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
	//// 1. *(parr+j)�� 1�������� indirection  -> parr+j�� �ּҰ�
	//// 2. *(*(parr + j) + i)�� 2�������� indirection -> ���Ұ�

	//printf("\n");

	//printf("%p\n", &parr[0]);	// ������ ��ü�� �ּ�
	//printf("%p\n", parr[0]);	// �����Ͱ� ����Ű�� �ּ�(&parr[0]�� �ٸ�)
	//printf("%p\n", arr);		// &arr[0] ��� ���������� ������ �ּ� ���� �޸𸮴� ���� ����
	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr[0]);
	//printf("%p\n", &arr[0][0]);


	/* array of string of diverse lengths example */

	char* name[] = { "aladdin","jasmine","magic carpet","genie" };
	// ���� a,j,m,g(������ ���ڿ� ù��°)�� �ִ� ��ġ�� �����

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