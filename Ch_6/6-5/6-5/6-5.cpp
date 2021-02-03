#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int tv, fv;
	tv = (1 < 2);	//1<2 는 true -> 1
	fv = (1 > 2);	//1>2는 false -> 0

	printf("True is %d\n", tv);
	printf("False is %d\n", fv);

	int i = 5;
	while (i)
		printf("%dis true\n", i--);
	printf("%d is false\n", i);

	//c에서는 0이면 false, 그 외에는 true로 접근함

	// while(1) -> 무한루프


	return 0;
}