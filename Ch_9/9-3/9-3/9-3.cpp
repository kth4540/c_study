#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//strlen()
#include <stdbool.h>

int int_min(int, int);

int main()
{
	int i1, i2;

	while (1)
	{
		printf("input two integers : ");

		if (scanf("%d %d", &i1, &i2) != 2)
			break;	//�������� �Է����� ����

		int lesser = int_min(i1, i2);

		printf("");
	}
}

int int_min(int i, int j)
{
	//int min;	//local variable(��������)
	//if (i < j)
	//	min = i;
	//else
	//	min = j;

	//return min;

//	return (i < j) ? i : j;

	if (i < j)
		return i;
	else
		return j;

	printf("who am i");	// return �ڿ� �����Ƿ� ������� ����
}