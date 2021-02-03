#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	/*
	while(expression)	expression 이 true면 1, false 면 0
		statement
	*/
	int i;

	i = 1;
	while (i < 5)	//infinite loop
		printf("Hi!\n");	//	iteration	
	i = 1;
	while (--i < 5)			//wrong direction
		printf("Hi!\n");
	i = 1;
	while (i < 5)
	{
		printf("i before = %d\n", i);
		i++;
		printf("i after = %d\n", i);
	}

	i = 10;
	while (i++ < 5)	// cannot enter
		printf("Hi!\n");

	/* common mistakes */
	//	i = 0;
	//	while (i < 3)
	//		printf("i\n", i);
	//		i++;	//-> indenting
	//		//-> 중괄호가 없음
	/////////////
	//	i = 0;
	//	while (i++ < 3);	//null statement	->';' 주의
	//		printf("%i\n", i);
	//////////////
	//		while (scanf("%d", &i) == 1)
	//			;	//null statement	--> 아무것도 하지 않음

}