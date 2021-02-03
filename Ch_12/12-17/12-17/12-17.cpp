#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int g = 123;

void func()
{
	int i = 123;
	printf("local variable \t%lld\n", (long long)&i);
}

int main()
{
	const char* message = "banana";

	void (*f_ptr)() = func;

	printf("local pointer :\t%lld\n", (long long)&message);
	printf("function pointer :\t%lld\n", (long long)&f_ptr);
	printf("string data :\t%lld\n", (long long)message);
	printf("function address :\t%lld\n",(long long)f_ptr);
	printf("local pointer :\t%lld\n", (long long)main);
	printf("local pointer :\t%lld\n", (long long)&g);

	func();

	int* ptr = (int*)malloc(100 * sizeof(int));
	if (!ptr) exit(EXIT_FAILURE);

	printf("allocated memory \t%lld\n", (long long)ptr);

	free(ptr);
	return 0;
}