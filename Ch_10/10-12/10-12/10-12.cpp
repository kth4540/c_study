#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 7;
	int* ptr = &a;	// ptr ������ ������ a�� �ּҰ��� ����
	*ptr = 8;

	int** pptr = &ptr;	
	//���� ������ pptr������ ptr�� �ּҰ��� ����
	//ptr�� �������̹Ƿ� �ѹ� �� dereferencing -> a�� ����

	**pptr = 9;	//*(*pptr)=9;	-> a�� �� ����

	printf("%d %d %d\n", a, *ptr, **pptr);
}