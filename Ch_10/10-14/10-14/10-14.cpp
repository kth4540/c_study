#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//	int arr[2][3] = { {1,2,3} ,{4,5,6} };
		// 배열의 이름은 그 자체로 주소임
		// arr == arr[0] == &arr[0] == &a[0][0] != a[0][0]
		// arr[0]은 두번째 인덱스가 붙는 배열의 이름임-> arr[0]도 주소
		// 이중 포인터 개념으로 보면 &arr[0]는 arr[0]의 주소값이라고 생각할 수 있음
		// 하지만 배열에는 주소를 따로 저장하는 메모리 공간은 없음
		// 따라서 arr[0]==&arr[0]

		//a[0][0]==**arr

	float arr2d[2][4] = { {1.0f,2.0f,3.0f,4.0f},{5.0f,6.0f,7.0f,8.0f} };


	//printf("%u\n", (unsigned)arr2d);
	//printf("%u\n", (unsigned)arr2d[0]);
	//printf("\n");

	////arr2d points to arr2d[0] (not arr2d[0][0])
	//// arr2d -> arr2d[0] -> arr2d[0][0]의 개념

	//printf("%u\n", (unsigned)*arr2d);	// == arr2d[0]
	//printf("%u\n", (unsigned)&arr2d[0]);// == *arr2d == &arr2d[0][0]
	//printf("%u\n", (unsigned)&arr2d[0][0]); // == &arr2d[0]
	//printf("%f %f\n", arr2d[0][0], **arr2d);	// double indirection 으로 값 출력

	//printf("\n");

	//printf("%u\n", (unsigned)(arr2d + 1));
	//printf("%u\n", (unsigned)&arr2d[1]);
	//printf("%u\n", (unsigned)(arr2d[1]));
	//printf("%u\n", (unsigned)(*(arr2d + 1)));	// 포인터 연산
	//printf("%u\n", (unsigned)(&arr2d[0] + 1));
	//printf("%u\n", (unsigned)(&arr2d[1][0]));

	//printf("%f\n", *(*(arr2d + 1) + 2));

	float(*pa)[4];	// a single pointer to an array of 4 floats
	// -> 4개의 float를 가진 배열에 대한 포인터 (1개) 
	// -> float a[4] 같은 배열에 대한 포인터
	float* ap[2];	// an array of two pointers to float
	// float 포인터를 2개 가진 배열 (2개)

	printf("%zu\n", sizeof(pa));
	printf("%zu\n", sizeof(ap));
	printf("\n");

	pa = arr2d;
	//pa[0] = arr2d[0];	-> error
	//pa[1] = arr2d[1];	-> error
	// 포인터가 1개이므로 불가능

	//ap = arr2d; -> error
	// 포인터가 배열 상태이므로 불가능
	ap[0] = arr2d[0];
	ap[1] = arr2d[1];

	printf("%u %u\n", (unsigned)pa, (unsigned)(pa + 1));
	// pa는 포인터 1개-> 주소 자체를 대입 -> arr2d[0]
	printf("%u %u\n", (unsigned)ap, (unsigned)(ap + 1));
}