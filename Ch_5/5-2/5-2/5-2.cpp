#include <stdio.h>

int main()
{
	const int two = 2;	//two�� ���� �Ұ����� L-value(���⼭ =�� ������ �ƴ϶� �ʱ�ȭ)

	int a;
	int b;
	int c;	//a,b,c�� ���� ������ L-value

	a = 42;	//42�� R-value
	b = a;
	c = two * (a + b);	//(a+b)�� R-value(���α׷��� ����ϴ� �ӽ� ��, ������  �����)
}