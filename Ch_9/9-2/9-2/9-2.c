#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//strlen()
#include <stdbool.h>

#define width 40
#define name "KTH"
#define address "ANSAN"

//void print_char(char c, int n_stars, bool line); -> prototype

void print_char(char c, int n_stars,bool line)
//인자=매개변수=parameter
//인수=argument
//이 함수에서 매개변수는 c, n_stars, line, 인수는 매개변수에 실제로 들어가는 값
{
	for (int i = 0; i < n_stars; ++i)
		printf("%c", c);

	if (line == true)
		printf("\n");
}
// 인수가 어떤 값이냐에 따라서 함수의 기능이 달라짐-> 함수의 매개변수화

void print_centeered_str(char str[])
{
	int n_blanks = 0;
	n_blanks = (width - strlen(str)) / 2;
	print_char(' ', n_blanks, false);
	printf("%s\n", str);
}

// 함수는 prototype 만 있어도 build 자체는 가능함(compile error는 없음)
// 대신 linking error 가 발생


int main()
{

	print_char('*', width,true);

	print_centeered_str(name);
	print_centeered_str(address);

	print_char('*', width,false);	//같은 기능이 2번 이상 반복되면 함수화

	return 0;
}