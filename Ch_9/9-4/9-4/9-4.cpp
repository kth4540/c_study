#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);

int int_max(int i, int j)
{
	int m;	//stack frame
	m = i > j ? i : j;
	return m;
}

int main()
{
	//m = 123;	-> ���� m�� �Լ� int_max ������ ��ȿ��
	int a;	//������ �޸𸮸� ����� �� �ְ� �ϴ� ��Ī

	a = int_max(1, 2);

	printf("%d\n", a);
	printf("%p\n", &a);	// ������ �ּҰ��� ���� �����

	{
		int a;
		a = int_max(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);
		// ���� a���� ����غ��� �߰�ȣ ���� a�� �޸� �ּҰ� �ٸ�
		// -> ������ �ٸ��Ƿ� �ٸ� ������

		int b = 123;
	}
	// b = 123; ->b�� ���� ���� �����̹Ƿ� ������ �� ����
	printf("%d\n", a);
	printf("%p\n", &a);


}