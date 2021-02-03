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

	const double* const pd = arr2;	//->const�� ������ ������ arr2�� ���� �ٲ�(arr2�� const ����)
	//*pd = 3.0;	//pd[0]=3.0; arr2[0]=3.0;
	//pd[2] = 1024.0;	// arr2[2]=1024.0;	-> �迭ó�� ��� ����

	//����(double ����)const : �����Ͱ� ����Ű�� �ִ� ���� �޸� ���� �������� ����
	//����(double ������)const : �����Ͱ� ����Ű�� �ּҸ� �������� ����

	printf("%f %f", pd[2],arr2[2]);

	//pd++;	�������� �ּҰ� ��ü�� ���� ����

	printf("%f %f", pd[2], arr2[2]);

	return 0;
}