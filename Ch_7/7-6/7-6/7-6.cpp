#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned num;
	bool Isprime = true;

	int tmp = 1;

	scanf("%u", &num);

	/*
		Todo: check if num i aprime number
		ex)num is 4, try num % 2, num % 3
		ex)num is 5, try num % 2, num % 3, num % 4
	*/

	for (unsigned div = 2; div*div <= num; ++div)	
		// div*div 인 이유 : 예를 들어 num=20이면 약수는 1 2 4 5 10 20
		// num 의 제곱근이 약수의 중간값
		// -> div의 제곱이 num을 넘어가면 확인할 필요가 없음
	{
		if (num % div == 0)
		{
			Isprime = false;
			if (div == num / div)
				printf("%u is divisible by %u\n", num, div);
			else
				printf("%u is divisible by %u and %u.\n", num, div,num/div);


		}
	}

	if (Isprime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);
	
}