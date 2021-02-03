#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void ToUpper(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char* str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void UpdateString(char* str, int(*pf)(int))
{
	while (*str)
	{
		*str = (*pf)(*str);
		str++;
	}
}

int main()
{
	char str[] = "Hello,World";

	void(*pf)(char*);

	pf = ToUpper;	//name of a function is a pointer
	//pf=&ToUpper; ->acceptable
	//pf=ToUpper(str)	-> not acceptable in c

	printf("string literal %lld\n", (long long)("Hello,World"));
	printf("function pointer %lld\n", (long long)ToUpper);
	printf("variable %lld\n", (long long)str);

	(*pf)(str);
	//pf(str)

	printf("ToUpper %s\n", str);

	pf = ToLower;

	pf(str);

	printf("ToLower %s\n", str);
	
	UpdateString(str, toupper);
	printf("toupper %s\n", str);

	UpdateString(str, tolower);
	printf("tolower %s\n", str);

	//__cdecl is function calling convertion

	return 0;
}