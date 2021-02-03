#include <stdio.h>

void say_hello(void);	// 함수 선언

int main()
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	z = x + y;
	say_hello();
	return 0;
}

void say_hello(void)
{
	int x = 1;
	x = 10;
	printf("Hello, world!\n");
}

// 줄 왼쪽 눌러서 중단점 설정 후 디버그
// F11 눌러서 한줄씩 확인 가능