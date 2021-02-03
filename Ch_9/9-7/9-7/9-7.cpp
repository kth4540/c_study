#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_func(int);

int main()
{
	my_func(1);

	return 0;
}

void my_func(int n)
{
	printf("level %d, address of variable n = %d\n", n, &n);
	if (n < 4)
		my_func(n + 1);

	printf("level %d, address of variable n = %d\n", n, &n);

	// 출력해보면 n의 주소가 int size인 4보다 더 큰 간격으로 쌓임
	// ->실제로는 함수 실행에 필요한 데이터들도 stack에 쌓임

//						n=4
//				n=3		n=3		n=3
//		n=2		n=2		n=2		n=2		n=2
//n=1	n=1		n=1		n=1		n=1		n=1		n=1

//n=1~4일 때 메모리 값이 다름
}