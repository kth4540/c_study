#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.141592
#define GRAVITY 9.8

#define THREE 3
#define MESSAGE "MESSAGE"

#define NINE THREE*THREE
#define SAY_HELLO printf("hello world!\n");
#define FORMAT "number is %d\n"

#define MY_CH 'Z'
#define MY_ST "Z"	//Z\0

#define LIMIT 20

/* redefining constants*/
#define six 2*3
#define six 2 * 3

#undef six
	/* tokens
	#define six 3*2
	#define six 3 * 2 
	#define six 3	*	2
	-> 컴파일러에 따라 위 셋이 다르게 인식될 수 있음
	*/



int main()
{
	//preprocessor	Macro		body
	//#define      SAY_HELLO	printf("hello world);

	//define one 1
	//define square(x) x*x

	const int lim = 50;
	static int arr1[LIMIT];
	const int lim2 = 2 * LIMIT;

	int n = THREE;

	SAY_HELLO;

	n = NINE;

	printf(FORMAT, n);
	printf("%s\n", MESSAGE);
	printf("say hello nine\n");	// not replaced

	return 0;



}