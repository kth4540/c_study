#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>	//isalpha and etc...

int main()
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		//if (ch >= 'a' && ch <= 'z')
		//	ch -= 'a' - 'A';
		//else if (ch >= 'A' && ch <= 'Z')
		//	ch += 'a' - 'A';

		if (islower(ch))	//islower, isupper -> 대소문자 구별 함수
			ch = toupper(ch);	// tolower, toupper -> 대소문자 변환 함수
		else if (isupper(ch))
			ch = tolower(ch);

		if (isdigit(ch))	//isdigit -> 숫자 구별 함수
			ch = '*';

		// isalnum() : 알파벳 또는 숫자
		// isalpha() : 알파벳
		// iscntrl() : contrl character
		// ->  is....() : 구별 함수

		putchar(ch);
	}
		
}