#include <stdio.h>

int main()
{
	const int code = 6848;
	int check;

	do
	{
		printf("enter code : ");
		scanf_s("%d", &check);
	} while (check != code);	//비교하기 전 무조건 1번은 실행

	printf("Good!\n");
}