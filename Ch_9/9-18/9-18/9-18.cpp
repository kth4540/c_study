#include <stdio.h>

void swap(int *a, int *b)	//-> �����͸� �ٿ��� ������ �ּҸ� ����
{
	printf("%p %p\n", a, b);

	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 123;
	int b = 456;

	printf("%p %p\n", &a, &b);
	// �����͸� ������� �ʾ��� �� ����� �� :
	//swap �Լ������� a b �ּҿ� main������ a b �ּҰ� �ٸ�
	//-> main������ a b ���� ������ ����
	// call by value

	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}