#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header_B.h"
#include "Header_A.h"


/*
	#define, #undef, #if, #ifdef, #ifndef, #else, #elif, #endif
*/

#define LIMIT 400
#undef LIMIT	//OK TO UNDEFINE previoulsy not defined macro

int main()
{
	test_function_A();
	test_function_B();

	return 0;
}