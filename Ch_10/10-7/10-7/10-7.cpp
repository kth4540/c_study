#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double* arr1,int n)
{
	printf("size= %zd in function average\n", sizeof(arr1));
	// 포인터의 size가 출력됨 -> arr1[]안의 숫자는 의미가 없음
	double avg = 0.0;
	for (int i = 0; i < n; ++i)
		avg += arr1[i];
	avg /= (double)n;

	return avg;
}

int main()
{
	double arr1[5] = { 10,13,12,7,8 };
	//double arr2[5] = { 1.8,-0.2,6.3,13.9,20.5 };
	double arr2[3] = { 1.8,-0.2,3.5 };

	printf("Address=%p\n", arr1);
	printf("Size=%zd\n", sizeof(arr1));	// 5*8=40
	printf("Address=%p\n", arr2);
	printf("Size=%zd\n", sizeof(arr2));	// 5*8=40

	printf("Avg=%f\n", average(arr1,5));
	printf("Avg=%f\n", average(arr2,3));
	return 0;
}