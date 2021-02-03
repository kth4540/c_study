#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 7;
	int* ptr = &a;	// ptr 포인터 변수에 a의 주소값을 저장
	*ptr = 8;

	int** pptr = &ptr;	
	//이중 포인터 pptr변수에 ptr의 주소값을 저장
	//ptr이 포인터이므로 한번 더 dereferencing -> a에 접근

	**pptr = 9;	//*(*pptr)=9;	-> a의 값 변경

	printf("%d %d %d\n", a, *ptr, **pptr);
}