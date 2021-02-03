#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	a = 123;

	int* a_ptr;	//* : asterisk
	a_ptr = &a;	//&=address-of operator

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	*a_ptr=456;

	printf("%d %d %p%\n", a, *a_ptr, a_ptr);// 주소값은 변하지 않음

	b = a_ptr;	//-> b에는 a의 주소값이 들어감
	b = *a_ptr;	//-> b에는 a의 실제 값이 들어감(456)

	printf("%d\n", b);

	*a_ptr = 789;
	printf("%d %d %p%\n", a, *a_ptr, a_ptr);
	//b에는 a의 '값'만 저장됨, a에는 변화 없음


	a = 1004;
	printf("%d %d %p%\n", a, *a_ptr, a_ptr);
	//*a_ptr가 redirection한 값도 1004
}