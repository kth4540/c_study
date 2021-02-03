#include <stdio.h>

int main()

{
	int a = 3, b = 5, c = 7, d = 9;

	int* a_ptr = &a, * b_ptr = &b, * c_ptr = &c, * d_ptr = &d;

	printf("%p %p %p %p\n", &a, &b, &c, &d);

	//debugging 중 debug->windows->memory로 실제 메모리 사용 확인 가능
	return 0;
}