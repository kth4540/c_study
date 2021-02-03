#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 30

enum spectrum{red,orange,yellow,green,blue};
const char* colors[] = { "red","orange","yellow","green","blue" };

int main()
{
	char choice[LEN] = { 0, };
	enum spectrum color;
	bool color_is_found = false;

	while (1)
	{
		printf("color or enter: ");
		fgets(choice, LEN, stdin);
		

		if (choice[0] == '\n')
		{
			fputs("stop", stdout);
			break;
		}


		for(int i=0;i<4;++i)
			if (strcmp(choice, colors[i]) == 0)
			{
				fputs(choice[i], stdout);
				break;
			}
	}
	return 0;
}