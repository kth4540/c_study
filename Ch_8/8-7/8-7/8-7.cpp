#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[255];
	int i, i2;
	double d;
	//input = hello 123 3.14
	scanf("%s %d %lf", str, &i, &d);
	printf("%s %d %f\n", str, i, d);	//���� '\n'�� ���� ���ۿ� ��������

	//input = hello 123 3.14
	scanf("%s %d %d", str, &i, &i2);	//scanf()���� '\n'�� %c�� ���� �ʴ� �̻� ������
										//�ܼ��� �ٽ� �Է��� �޴� ���°� �Ǹ� ���ο� �Է��� ���� �ִ� ���� ���� �������
	printf("%s %d %d\n", str, i, i2);

	//scanf()�� ��ĭ�� �������� �ν�������
	//getchar()�� ��ĭ�� ���ڷ� �ν���

	char c;
	while ((c = getchar()) != '\n')
		putchar(c);
	printf("\n");

	// ù��° scanf()������ ���� ���� �Է�
	// 2��° scanf()���� i2�� ���� 3������ ���۸� �а� scanf() ���� -> ���ۿ��� .14�� ��������
	// ���� .14�� getchar()���� ���۸� �о ������ .14 ���ڷ� ���
	return 0;
}