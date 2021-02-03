#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<stdbool.h>

void update_string(char* str, int(*pf)(int));
void ToUpper(char* str);
void ToLower(char* str);
void Transpose(char* str);

int main()
{
	char options[] = { 'u','l' };
	int n = sizeof(options) / sizeof(char);

	typedef void(*FUNC_TYPE)(char*);
	FUNC_TYPE operations[] = { ToUpper,ToLower };

	printf("enter a string>>");

	char input[100];

	while (scanf("%[^\n]%*c", input) != 1)
		printf("please try again\n");


	while (1)
	{
		printf("choose an option:\nu) to upper\nl) to lower\n");

		char c;

		while (scanf("%c%[^\n]%*c", &c) != 1)
			printf("please try again\n");

		bool found = false;


		for (int i = 0; i < n; ++i)
		{
			if (options[i] == c)
			{
				operations[i](input);
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	return 0;
}

void update_string(char* str, int(*pf)(int))
{
	while (*str)
	{
		*str = (*pf)(*str);
		str++;
	}
}

void ToUpper(char* str)
{
	update_string(str, toupper);
}

void ToLower(char* str)
{
	update_string(str, tolower);
}

