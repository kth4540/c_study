#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void int_binary(const int);
int main()
{
	/* bitwise shift operators */
	printf("%hhd\n", 1 << 3);	
	
	//76543210       76543210     76543210
	//00000001 -> 00000001??? ->  00001000
	
	printf("%hhd\n", 8 >> 1);
	
	//76543210    76543210     76543210
	//00001000 -> ?00001000 -> 00000100

	printf("%hhd\n", -119 >> 3);
	printf("%hhu\n", 137 >> 3);

	//76543210    76543210       76543210
	//10001001 -> ???10001001 -> 11110001 
	//(signed면 ???를 1로 채움)
	//10001001 -> >>>10001001 -> 00010001 
	//(unsigned면 ???를 0으로 채움)

	printf("%hhd\n", -119 << 4);
	printf("%hhu\n", 137 << 4);

	//76543210        76543210    76543210
	//10001001 -> 10001001???? -> 10010000 (-112)(signed)
	//10001001 -> 10001001???? -> 10010000 (144)(unsigned)

	int a = 1;
	a <<= 3;
	printf("%d\n", a);
	a >>= 2;
	printf("%d\n", a);
	
	printf("unsigned int %u\n", 0xffffffff);
	printf("signed int %d\n", 0xffffffff);
	int_binary(0xffffffff);
	printf("right shift by 3\n");
	int_binary((signed)0xffffffff>>3);
	int_binary((unsigned)0xffffffff >> 3);

}

void int_binary(const int num)
{
	printf("decimal %12d==binary", num);

	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const int mask = 1 << (bits - 1 - i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}