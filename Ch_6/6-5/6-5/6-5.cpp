#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int tv, fv;
	tv = (1 < 2);	//1<2 �� true -> 1
	fv = (1 > 2);	//1>2�� false -> 0

	printf("True is %d\n", tv);
	printf("False is %d\n", fv);

	int i = 5;
	while (i)
		printf("%dis true\n", i--);
	printf("%d is false\n", i);

	//c������ 0�̸� false, �� �ܿ��� true�� ������

	// while(1) -> ���ѷ���


	return 0;
}