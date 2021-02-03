#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81

typedef struct
{
	char* fname;	//use malloc
	char* lname;	//use malloc
	int letters;
}namect;

void getinfo(namect*);
void makeinfo(namect*);
void showinfo(const namect*);
void cleanup(namect*);

int main()
{

	/* dangerous usage */

	namect p = { "tom","clancy"};
	//printf("%s %s\n", p.fname, p.lname);

	//int f1 = scanf("%[^\n]%*c", p.lname);
	//printf("%s %s\n", p.lname, p.fname);

	/* recommend usage */

	//char buffer[SLEN] = { 0, };
	//int f2 = scanf("%[^\n]%*c", buffer);
	//p.fname = (char*)malloc(sizeof(buffer) + 1);

	//if (p.fname != NULL)
	//	strcpy(p.fname, buffer);
	//printf("%s %s\n", p.fname, p.lname);

	namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}

void getinfo(namect* ct)
{
	int flag;
	char tmp[SLEN] = { '\0', };

	printf("please enter yout first name :");
	flag = scanf("%[^\n]%*c", tmp);
	if (flag != 1)
		printf("wrong input");

	else
	{
		ct->fname = (char*)malloc(strlen(tmp) + 1);	//is for '\0'
		if (ct->fname != NULL)
			strcpy(ct->fname, tmp);
		else
			printf("malloc() failed");

	}

	printf("please enter your last name.\n");
	flag = scanf("%[^\n]%*c", tmp);
	if (flag != 1)
		printf("wrong input");

	else
	{
		ct->lname = (char*)malloc(strlen(tmp) + 1);	//is for '\0'
		if (ct->lname != NULL)
			strcpy(ct->lname, tmp);
		else
			printf("malloc() failed");

	}
}

void makeinfo(namect* ct)
{
	ct->letters = strlen(ct->fname) + strlen(ct->lname);
}

void showinfo(namect* ct)
{
	printf("%s %s, your name contains %d letters.\n",
		ct->fname, ct->lname, ct->letters);
}

void cleanup(namect* ct)
{
	free(ct->fname);
	free(ct->lname);
}