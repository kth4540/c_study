#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 7;

	int* a_ptr = &a;	//*a_ptr이 int 자료형이라는 의미
						//a_ptr에 a의 주소값 저장
	*a_ptr = 8;			
	//간접 접근(indirection),역참조(dereferencing),방향 재지정(redirection)
	//주소값을 보고 메모리를 찾아가 값 변경
	int c = 9;
	
	c += *a_ptr;

	printf("%d\n", c);
}