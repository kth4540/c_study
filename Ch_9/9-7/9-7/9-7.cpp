#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_func(int);

int main()
{
	my_func(1);

	return 0;
}

void my_func(int n)
{
	printf("level %d, address of variable n = %d\n", n, &n);
	if (n < 4)
		my_func(n + 1);

	printf("level %d, address of variable n = %d\n", n, &n);

	// ����غ��� n�� �ּҰ� int size�� 4���� �� ū �������� ����
	// ->�����δ� �Լ� ���࿡ �ʿ��� �����͵鵵 stack�� ����

//						n=4
//				n=3		n=3		n=3
//		n=2		n=2		n=2		n=2		n=2
//n=1	n=1		n=1		n=1		n=1		n=1		n=1

//n=1~4�� �� �޸� ���� �ٸ�
}