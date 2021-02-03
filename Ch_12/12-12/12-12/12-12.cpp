#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	 /*
		rand()
		- 0 to RNAD_MAX(typically INT_MAX)
		- defined in stdlib.h
	 */ 
	// srand(3); random seed
	srand((unsigned int)time(0));

	for(int i = 0; i < 10; ++i)
		printf("%d\n", rand());

	unsigned int next = 1;
	for (int i = 0; i < 10; ++i)
	{
		next = next * 110351235 + 1234;
		next = (unsigned int)(next / 65536) % 32768;
		printf("%d\n", (int)next);
	}
	return 0;
}