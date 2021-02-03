#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
inline function specifier
-suggests inline replacement

inline functions should be short
a function with internal(static) linkage can be made inline
can't take its address
*/
// 함수가 간단할 경우 함수를 메모리에 저장하지 않고 코드로 넣음
inline int foo()
{
	return 5;
}

int main()
{
	int ret;
	ret = foo();

	printf("output is %d\n", ret);
	return 0;
}