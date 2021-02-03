#include <stdio.h>

void say_hello(void);	// 함수 선언

int main()
{
	say_hello();
	return 0;
}

void say_hello(void)
{
	printf("Hello, world!\n");
	// 반환형이 void면 return 필요 없음
}	// 함수 정의