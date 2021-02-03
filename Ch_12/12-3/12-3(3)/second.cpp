#include <stdio.h>

extern int el;
//extern -> 다른 소스파일의 전역변수를 사용

extern int il;

void testLinkage()
{
	printf("DoSomething called\n");
	printf("%d\n", el);
	//printf("%d\n", il);	-> static 때문에 error
	el++;
}