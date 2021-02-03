#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//strlen()

#define width 40
#define name "KTH"
#define address "ANSAN"

void print_char(char c,int n_stars)
{
	for (int i = 0; i < n_stars; ++i)
		printf("%c",c);
}

void print_centeered_str(char str[])
{
	int n_blanks = 0;
	n_blanks = (width - strlen(str)) / 2;
	print_char(' ', n_blanks);
	printf("%s\n", str);
}

int main()
{	

	print_char('*',width);
	printf("\n");

	print_centeered_str(name);
	print_centeered_str(address);

	print_char('*', width);	//같은 기능이 2번 이상 반복되면 함수화
	return 0;
}