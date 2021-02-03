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
		// div*div �� ���� : ���� ��� num=20�̸� ����� 1 2 4 5 10 20
		// num �� �������� ����� �߰���
		// -> div�� ������ num�� �Ѿ�� Ȯ���� �ʿ䰡 ����
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