#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int compute_pow(int base, int exp)
{
	int result = 1;
	for (int i = 0; i < exp; ++i)
		result *= base;
	return result;
}

int main()
{
	// 3의 4제곱
	// 3*3*3*3 = 81
	int result = 1;
	int base, exp;
	while (scanf("%d %d", &base, &exp) == 2)
	{
		//result = 1;
		//for (int i = 0; i < exp; ++i)
		//	result *= base;		-> 주석 부분을 함수로
		result=compute_pow(base, exp);

		printf("result= %d\n", result);
	}
	
}