#include <stdio.h>
#include "my_function.h"


int status = 0;

int add(int a, int b)
{
	return a + b;
}

void print_status()
{
	printf("adress = %p, value = %d\n", &status, status);
}

void print_address()
{
	printf("print_address()\n");
	printf("static function address %p\n", multiply);
	printf("static variable address %p\n", &si);
}