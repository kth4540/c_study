#include <stdio.h>

int main()
{
	char a;
	float b;
	double c;

	char* ptr_a = &a;
	float* ptr_b = &b;
	double* ptr_c = &c;

	printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
	printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));
	printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));
	printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*));

	//포인터 변수는 x64에서는 4byte, x86에서는 8byte
}