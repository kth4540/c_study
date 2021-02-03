#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int c;

	//while ((c = getchar()) != EOF)	// end of file
	//	// 입력이 끝나면 getchar()는 -1을 반환함
	//  ctrl+z 입력 시 EOF
	//	putchar(c);


	while (1)
	{
		c = getchar();
		printf("%d\n", c);
		if (c == EOF)
			break;
	}
}