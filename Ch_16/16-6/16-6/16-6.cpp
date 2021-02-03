#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_macro.h"
#include "my_struct.h"
#include "my_function.h"

extern int status;
int main()
{
	printf("PI =%f\n", PI);

	printf("%p %d\n", &status, status);

	print_status();
	print_address();
}