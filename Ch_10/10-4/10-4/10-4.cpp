#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10];

	const int num = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < num; ++i)
		arr[i] = (i + 1) * 100;

	int* ptr = arr;

	printf("%p %p %p\n", ptr, arr, &arr[0]);

	ptr += 2;
	
	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);

	//arr+=2; -> invalid
	// 배열의 이름을 포인터처럼 쓸 수는 있지만 완전히 동일하진 않음

	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);

	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);
	// 이 경우에는 포인터 값을 가져온 후 값 증가 (괄호 주의)

	for (int i = 0, *ptr = arr; i < num; ++i)
	{
		printf("%d %d\n", *ptr++, arr[i]);
	}
}