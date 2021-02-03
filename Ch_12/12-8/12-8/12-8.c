#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Static variable with external linkage
	- File scope, external linkage, static storage duration
	- External storage class
	- External variables
*/
int g_int=0;
double g_arr[1000] = { 0.0, };
/*
	Initializing External Variables
*/

int x = 5;
int y = 1 + 2;
size_t z = sizeof(int);
//int x2 = 2 * x;	// not ok, x is a variable

void fun()
{
	printf("g_int in fun() %d %p\n", g_int, &g_int);
	g_int += 10;
}

void fun_sec();

//extern void fun_sec();

int main()
{
	/*
		defining declaration vs referencing declaration
	*/

	extern int g_int;

	printf("g_int in main() %d %p\n", g_int, &g_int);	// main의 g_int
	g_int += 1;

	fun();	// 전역변수 g_int
	fun_sec();
	return 0;
}