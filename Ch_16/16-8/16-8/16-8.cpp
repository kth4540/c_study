#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Different_file.h"
void different_function();

int main()
{
	printf("__FILE__:%s\n", __FILE__);
	printf("__DATE__:%s\n", __DATE__);
	printf("__TIME__:%s\n", __TIME__);
	printf("__LINE__:%d\n", __LINE__);
	printf("__func__:%s\n", __func__);

	different_function();

	different_func_int_different_file();


#line 7
	printf("__LINE__ after #line %d\n", __LINE__);

#line 1 "hello.txt"
	printf("__LINE__ after #line %d\n", __LINE__);
	printf("__FILE__: %s\n", __FILE__);

#if __LINE__ !=26
#error Not line 33
#endif
	return 0;
}

void different_function()
{
	printf("this function is %s\n", __func__);
	printf("this is line %d\n", __LINE__);
}