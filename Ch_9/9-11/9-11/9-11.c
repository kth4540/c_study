#define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h> -> my_header.h.에서 이미 include

#include "My_Header.h"
#include <stdio.h>

int main()
{
	print_hello();
	print_hi(); 
	print_hello();
	print_hi();
	print_str("ni_hao");

	printf("hello");

	return 0;
}