#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	//int temp;
	//// ���� ? A:B -> ������ true�� A, false�� B
	//temp = true ? 1024 : 7;	//������ true �̹Ƿ� temp=1024
	//printf("%d\n", temp);

	//temp = false ? 1024 : 7; //������ false �̹Ƿ� temp=7
	//printf("%d\n", temp);

	int number;
	scanf("%d", &number);


	const bool is_even = (number % 2 == 0) ? true : false;
	//const �� �ᵵ ��� ������ ���°��� ����

	if (is_even)
		printf("Even");
	else
		printf("Odd");
}