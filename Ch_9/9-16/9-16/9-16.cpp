#include <stdio.h>

int main()

{
	int a = 3, b = 5, c = 7, d = 9;

	int* a_ptr = &a, * b_ptr = &b, * c_ptr = &c, * d_ptr = &d;

	printf("%p %p %p %p\n", &a, &b, &c, &d);

	//debugging �� debug->windows->memory�� ���� �޸� ��� Ȯ�� ����
	return 0;
}