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

		if (islower(ch))	//islower, isupper -> ��ҹ��� ���� �Լ�
			ch = toupper(ch);	// tolower, toupper -> ��ҹ��� ��ȯ �Լ�
		else if (isupper(ch))
			ch = tolower(ch);

		if (isdigit(ch))	//isdigit -> ���� ���� �Լ�
			ch = '*';

		// isalnum() : ���ĺ� �Ǵ� ����
		// isalpha() : ���ĺ�
		// iscntrl() : contrl character
		// ->  is....() : ���� �Լ�

		putchar(ch);
	}
		
}