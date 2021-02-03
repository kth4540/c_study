#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Storage Classes and Functions
	- Functions external (by default) or static
	- A function declaration is assumed to be extern
*/

int g_int = 123;

void fun();
void fun_second();

int main()
{
	fun();
	fun_second();

	return 0;
}

void fun()
{
	extern int g_int;

	g_int += 1;
	printf("g_int in fun() %d %p\n", g_int, &g_int);

}