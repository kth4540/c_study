#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Linkage
	Variables with block scope, function scope, or function prototype scope
	- No linkage
	File scope variables
	- External or internal linkage
*/

// translation unit

int el;	//file scope with extrnal linkage(global variable)
static int il;	//file scope with internal linkage -> �ٸ� file scope ���� ��� �Ұ���

void testLinkage();

int main()
{
	el = 1024;

	testLinkage();

	printf("%d\n", el);

	return 0;
}