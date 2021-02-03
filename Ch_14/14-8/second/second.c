#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NLEN 30

typedef struct
{
	char first[NLEN];
	char last[NLEN];
	int num;
}name_count;

name_count receive_input();
name_count count_characters(name_count);
void show_result(const name_count);
char* s_gets(char* st, int n);

int main()
{
	name_count user_name;

	user_name=receive_input();
	user_name=count_characters(user_name);
	show_result(user_name);

	return 0;
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

name_count receive_input()
{
	int flag;
	name_count nc;
	printf("input your first name: ");
	s_gets(nc.first, NLEN);
//	flag = scanf("%[^\n]%*c", cnt->first);

	//%[^a] -> a가 나타날 때 까지 받음
	//%*c -> 입력은 받지만 변수에 저장하지 않음

	//->

	//if (flag != 1)
	//	printf("wrong input");

	printf("input your last name: ");
	s_gets(nc.last , NLEN);

	return nc;
}

name_count count_characters(name_count nc)
{

	nc.num = strlen(nc.first) + strlen(nc.last);

	return nc;
}

void show_result(const name_count nc)
{
	printf("hi, %s %s, your name has a %d characters.\n",
		nc.first, nc.last, nc.num);
}

