#include <stdio.h>

void swap(int *a, int *b)	//-> 포인터를 붙여서 변수의 주소를 받음
{
	printf("%p %p\n", a, b);

	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 123;
	int b = 456;

	printf("%p %p\n", &a, &b);
	// 포인터를 사용하지 않았을 시 생기는 일 :
	//swap 함수에서의 a b 주소와 main에서의 a b 주소가 다름
	//-> main에서의 a b 값은 변하지 않음
	// call by value

	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}