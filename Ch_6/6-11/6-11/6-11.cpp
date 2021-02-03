#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
		printf("%d %d\n", n, nsqr);
	// comma operator 사용 시 한가지의 자료형으로만 가능
	//printf()에서 comma는 separators

	int i, j;
	i = 1;
	i++, j = i;	//comma is a sequence point(sequence point=';')
			// i++, 에서 계산 실행, 후 j=i에서 j에 1이 아닌 2 대입
	printf("%d %d\n", i, j);

	int x, y, z;
	z = x = 1, y = 2;
	printf("x=%d, y=%d, z=%d \n", x, y, z);
	z = (x = 1), (y = 2);
	printf("x=%d, y=%d, z=%d \n", x, y, z);
	z = ((x = 1), (y = 2));	// comma operator에서는 가장 오른쪽 값이 전체 expression의 값
							// -> z=2
	printf("x=%d, y=%d, z=%d \n", x, y, z);

	//int my_money = 123, 456;	//error
	int my_money = (123, 456);	//456이 가장 오른쪽 값이므로  my_money에 456 대입
	printf("%d\n", my_money);

	return 0;
}