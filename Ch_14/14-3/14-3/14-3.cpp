#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct Aligned
	{
		int a;
		float b;
		double d;
	};

	struct Aligned a1, a2;

	printf("sizeof %zd\n", sizeof(struct Aligned));
	printf("sizeof %zd\n", (long long)&a1);
	printf("sizeof %zd\n", (long long)&a1.a);
	printf("sizeof %zd\n", (long long)&a1.b);
	printf("sizeof %zd\n", (long long)&a1.d);

	printf("sizeof %zd\n", sizeof(struct Aligned));
	printf("sizeof %zd\n", (long long)&a2);
	printf("sizeof %zd\n", (long long)&a2.a);
	printf("sizeof %zd\n", (long long)&a2.b);
	printf("sizeof %zd\n", (long long)&a2.d);

	/*
		padding (struct member allignment)
		-1 word :4 bytes in x86, 8 bytes in x64

		컴파일러는 가장 크기가 큰 멤버 자료형의 배수가 되도록 정렬
	*/

	struct Padded
	{
		char a;		//1 byte
		float b;	//4 byte
		double d;	//8 byte
	};
	//
	//8byte 배수 정렬 ->c p p p f f f f | d d d d d d d d ->16 byte
	 
	struct Padded2 
	{
		float a;
		double b;
		char c;
	};
	// f f f f p p p p | b b b b b b b b |  c p p p p p p p
	//-> 24 byte

	struct Padded p1;
	struct Padded2 p2;

	printf("sizeof %zd\n", sizeof(struct Padded));
	printf("sizeof %zd\n", (long long)&p1);
	printf("sizeof %zd\n", (long long)&p1.a);
	printf("sizeof %zd\n", (long long)&p1.b);
	printf("sizeof %zd\n", (long long)&p1.d);

	printf("sizeof %zd\n", sizeof(struct Padded2));
	printf("sizeof %zd\n", (long long)&p2);
	printf("sizeof %zd\n", (long long)&p2.a);
	printf("sizeof %zd\n", (long long)&p2.b);
	printf("sizeof %zd\n", (long long)&p2.c);

	struct person
	{
		char name[41];
		int age;
		float height;
	};

	struct person mom;
	printf("sizeof %zd\n", sizeof(struct person));
	printf("sizeof %zd\n", (long long)&mom.age);
	printf("sizeof %zd\n", (long long)&mom.height);
	printf("sizeof %zd\n", (long long)&mom.name);

	return 0;
}