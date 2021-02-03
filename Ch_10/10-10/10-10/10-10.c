#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//type qualifiers: const, volatile, ....

	const double PI = 3.14159;
	//PI = 2.14159; -> error

	const int arr[5] = { 1,2,3,4,5 };
	//arr[1] = 123; -> error	

	const double arr2[3] = { 1.0, 2.0, 3.0 };
	//arr2[0] = 100.0; -> error

	const double* const pd = arr2;	//->const를 붙이지 않으면 arr2의 값이 바뀜(arr2가 const 여도)
	//*pd = 3.0;	//pd[0]=3.0; arr2[0]=3.0;
	//pd[2] = 1024.0;	// arr2[2]=1024.0;	-> 배열처럼 사용 가능

	//앞쪽(double 왼쪽)const : 포인터가 가리키고 있는 곳의 메모리 값을 변경하지 못함
	//뒷쪽(double 오른쪽)const : 포인터가 가리키는 주소를 변경하지 못함

	printf("%f %f", pd[2],arr2[2]);

	//pd++;	포인터의 주소값 자체는 증가 가능

	printf("%f %f", pd[2], arr2[2]);

	return 0;
}