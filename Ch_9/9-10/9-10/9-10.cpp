#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	fibonacci sequence
	1,1,2,3,5,8,13,12,34,55,89,134
	ex) fibonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)
*/

int fibonacci(int number);

int main()
{
	for (int count = 1; count < 13; ++count)
		printf("%d ", fibonacci(count));

	return 0;
}

int fibonacci(int number)
{
	if (number > 3)
		return fibonacci(number - 2) + fibonacci(number - 1);
	else if (number == 2 || number == 1)
		return 1;
}

//note : memory(in)efficiency, redundant computation(중복계산)