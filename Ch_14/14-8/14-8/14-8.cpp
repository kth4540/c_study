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

void receive_input(name_count*);
void count_characters(name_count*);
void show_result(const name_count*);
char* s_gets(char* st, int n);

int main()
{
	name_count user_name;

	receive_input(&user_name);
	count_characters(&user_name);
	show_result(&user_name);

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

void receive_input(name_count* cnt)
{
	int flag;
	printf("input your first name: ");
	//s_gets(cnt->first, NLEN);
	flag = scanf("%[^\n]%*c", cnt->first);

	//%[^a] -> a가 나타날 때 까지 받음
	//%*c -> 입력은 받지만 변수에 저장하지 않음

	//->

	if (flag != 1)
		printf("wrong input");
}

void count_characters(name_count* cnt)
{
	cnt->num = strlen(cnt->first) + strlen(cnt->last);
}

void show_result(name_count* cnt)
{
	printf("hi, %s %s, your name has a %d characters.\n",
		cnt->first, cnt->last, cnt->num);
}

