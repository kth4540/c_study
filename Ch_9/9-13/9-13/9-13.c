#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	a = 123;

	int* a_ptr;	//* : asterisk
	a_ptr = &a;	//&=address-of operator

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	*a_ptr=456;

	printf("%d %d %p%\n", a, *a_ptr, a_ptr);// �ּҰ��� ������ ����

	b = a_ptr;	//-> b���� a�� �ּҰ��� ��
	b = *a_ptr;	//-> b���� a�� ���� ���� ��(456)

	printf("%d\n", b);

	*a_ptr = 789;
	printf("%d %d %p%\n", a, *a_ptr, a_ptr);
	//b���� a�� '��'�� �����, a���� ��ȭ ����


	a = 1004;
	printf("%d %d %p%\n", a, *a_ptr, a_ptr);
	//*a_ptr�� redirection�� ���� 1004
}