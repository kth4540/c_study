#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);

int int_max(int i, int j)
{
	int m;	
	m = i > j ? i : j;
	return m;
}

int main()
{

	int a;	//a�� ���ÿ� ����    (a)

	a = int_max(1, 2);	
	// int_max�� �����ϱ� ���� m�� ���ÿ� ����(a-m)
	// int_max ���� �Ϸ� �� m�� ���ÿ��� ����(a)
	{
		int b;	//b�� ���ÿ� ����(a-b)
		b = int_max(4, 5);
		// int_max�� �����ϱ� ���� m�� ���ÿ� ����(a-b-m)
		// int_max ���� �Ϸ� �� m�� ���ÿ��� ����(a-b)
		{
			int b = 123; // b�� ���ÿ� ����(a-b-b)
			//�߰�ȣ ���� b�� �߰�ȣ ���� b�� �ٸ� ������
		}
		//�߰�ȣ ������ �����鼭 b�� ���ÿ��� ����(a-b)
		{
			int c = 456;	//c�� ���ÿ� ����(a-b-c)
		}
		//�߰�ȣ ������ �����鼭 c�� ���ÿ��� ����(a-b)
	}// b�� ���ÿ��� ����(a)
	return 0;
}