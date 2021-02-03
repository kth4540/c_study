#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
		union
		-store different data types is the same memory space
		-structure vs union
	*/

	union my_union
	{
		int i;
		double d;
		char c;
	};

	union my_union uni;

	printf("zd\n", sizeof(union my_union));
	printf("%lld\n", (long long)&uni);
	printf("%lld %lld %lld\n", (long long)&uni.i,
		(long long)&uni.d, (long long)&uni.c);

	uni.c = 'A';
	printf("%c %x %d\n", uni.c, (int)uni.c, uni.d);
	//0xCCCCCC41=-858993599

	uni.i = 0;
	uni.c = 'A';
	printf("%c %x %d\n", uni.c, (int)uni.c, uni.d);
	//0x00000041=65

	uni.d = 1.2;
	printf("%d %f %d %c", uni.i, uni.d, (int)uni.c, uni.c);
	// 33 33 33 33 33 33 f3 3f
	// 0x3ff3333333333333=1.1999999999999999
	//0x33333333=8589933459
	//0x33=51='3'

	/* initializng unions */

	union my_union uni2 = uni;
	union my_union uni3 = { 10 };
	union my_union uni4 = { .c = 'A' };
	union my_union uni5 = { .d = 1.23,.i = 100 };//do not recommend

	uni.i = 123;
	uni.d = 1.2;
	uni.c = 'k';

	printf("%d %f %d %c", uni.i, uni.d, (int)uni.c, uni.c);

	return 0;
}