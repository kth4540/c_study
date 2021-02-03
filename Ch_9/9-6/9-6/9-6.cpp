#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_func(int);

int main()
{
	my_func(1);
	// 무한히 실행되다가 stack overflow로 비정상종료됨
	// stop condition을 설정해야함
	return 0;
}

void my_func(int n)
{
	printf("level %d, address of variable n = %p\n", n, &n);
	if (n < 4)
		my_func(n + 1);

	printf("level %d, address of variable n = %p\n", n, &n);
	// stop condition 전까지는 출력되지 못하다가
	// 이후 순차적으로 종료되면서 출력
	// stack 과 유사
}