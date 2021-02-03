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
	// �迭�� �̸��� ������ó�� �� ���� ������ ������ �������� ����

	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);

	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);
	// �� ��쿡�� ������ ���� ������ �� �� ���� (��ȣ ����)

	for (int i = 0, *ptr = arr; i < num; ++i)
	{
		printf("%d %d\n", *ptr++, arr[i]);
	}
}