#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>

#define PERIOD '.'

int main()
{
	//char ch;
	//int character = 0, words = 1, lines = 1;
	//printf("Enter text : ");
	//while ((ch = getchar()) != PERIOD)
	//{
	//	if (ch == ' ')
	//		words++;
	//	else if (ch == '\n')
	//	{
	//		words++;
	//		lines++;
	//	}
	//	else
	//		character++;
	//}
	//printf("Characters :%d, Words: %d, Lines: %d ", character, words, lines);

	char c;
	int n_chars = 0;
	int n_lines = 0;
	int n_words = 0;
	bool word_flag = false;
	bool line_flag = false;
	//	Note : flag

	printf("Enter text : ");

	while ((c = getchar()) != PERIOD)
	{
		if (isspace(c) == false)
			n_chars++;

		if (!isspace(c) && !line_flag)
			// line_flag 가 false -> 그 줄이 입력되지 않았음
			// 첫 단어가 입력되면
		{
			n_lines++;	// line 추가
			line_flag = true;	// 줄 입력 표시
		}

		if (c == '\n')	//줄바꿈이 되면
			line_flag = false;	// 줄 입력 종료

		if (!isspace(c) && !word_flag)
			// 빈칸이 아니고 새로운 단어가 입력되지 않았다면
		{
			n_words++;	//단어 추가
			word_flag = true;	//단어 입력 표시
		}

		if (isspace(c))	//빈칸이면	
			// isspace(c)가 참이면 0이 아닌 수 반환(1 반환 아님)
			// isspace()는 ' ' 외에 '\n'도 참임 
			word_flag = false;	//단어 입력 종료
	}

	printf("characters : %d, words : %d, lines : %d\n",
		n_chars, n_words, n_lines);
}