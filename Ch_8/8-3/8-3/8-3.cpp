#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("i love apple.\n");

	//cmd â���� cd Desktop\C\Ch_8\8-3\Debug(���丮 �̵�)
	//8-3.exe > output.txt (��� ������ �ֿܼ��� output.txt�� ������)

	char str[100];
	scanf("%s", str);
	printf("i love %s\n", str);

	//debug ������ input.txt ���� ���� �� melon �Է�
	//8-3.exe < input.txt (�Է� ������ �ֿܼ��� input.txt�� ������)
}