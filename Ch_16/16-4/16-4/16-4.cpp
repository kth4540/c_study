#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	function-like macro
	
	#define add(x,y) ((x)+(y))

	x and y : macro arguments
*/

#define ADD1(X,Y) X+Y
#define ADD2(X,Y) ((X)+(Y))
#define SQUARE(X) X*X

#define PRINT_SQR1(X) printf("the square of %d is %d\n",X,SQUARE(X))
#define PRINT_SQR2(X) printf("the square of " #X" is %d\n",SQUARE(X))

#define XNAME(N) X##N
#define PRT_XN(N) printf("x" #N "= %d\n",X##N)
int main()
{
	int sqr = SQUARE(3);

	int a = 1;
	printf("%d\n", 2 * ADD1(1, 3));	//2*x+y=2*1+3=5	-> wrong
	printf("%d\n", 2 * ADD2(1, 3));	//2*(1+3)=8

	printf("%d\n", SQUARE(1 + 2));	//1+2*1+2	= 1+2+2=5	-> wrong
	printf("%d\n", 100 / SQUARE(3 + 1));
	//100/3+1*3+1=33+3+1=37	-> wrong
	printf("%d\n", SQUARE(++a));	
	//++a * ++a = 3*3=9

	PRINT_SQR1(10);
	PRINT_SQR2(20);

	int XNAME(1) = 1;	//int x1=1;
	int XNAME(2) = 2;	//int x2=2;

	PRT_XN(1);	//printf("x1" "= %d\n",x1);
	PRT_XN(2);	//printf("x2" "= %d\n",x2);

	return 0;
}