#include <stdio.h>

int main()
{
	const int code = 6848;
	int check;

	do
	{
		printf("enter code : ");
		scanf_s("%d", &check);
	} while (check != code);	//���ϱ� �� ������ 1���� ����

	printf("Good!\n");
}