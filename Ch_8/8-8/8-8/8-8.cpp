#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_first_char(void);
char get_choice(void);
int get_integer(void);
void count(void);

int main()
{
	//char ch;
	//int num;
	//while (1)
	//{
	//	printf("Enter the letter of your choice : ");
	//	ch = getchar();
	//	switch (ch)
	//	{
	//	case 'a':
	//		printf("avengers assemble\n");
	//		break;
	//	case 'b':
	//		printf("\a\n");
	//		break;
	//	case 'c':
	//		printf("Enter an integer : ");
	//		scanf("%d", &num);
	//		for (int i = 1; i <= num; ++i)
	//			printf("%d\n", i);
	//		break;
	//	case 'q':
	//		break;
	//	}
	//	while ((getchar()) != '\n')
	//		continue;
	//}
	//return 0;

	char user_choice;

	while ((user_choice = get_choice()) != 'q')
	{
		switch (user_choice)
		{
		case 'a':
			printf("avengers assemble\n");
			break;
		
		case 'b':
			printf("\a\n");
			break;
		case 'c':
			count();
			break;
		default:
			printf("please try again\n");
			break;
		}
	}
	return 0;
}

void get_first_char(void)
{
	while (getchar() != '\n')
		continue;
}

char get_choice(void)
{
	char ch = getchar();
	get_first_char();

	return ch;
}

int get_integer(void)
{
	int num;
	scanf("%d", &num);

	while (getchar() != '\n')
		continue;

	return num;
}

void count(void)
{
	int num;
	printf("enter an integer : ");
	num = get_integer();

	for (int i = 1; i <= num; ++i)
		printf("%d\n", i);
}