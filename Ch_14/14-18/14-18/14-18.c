#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* motivation */
/*int c=0;//red:0,orange:1,yellow:2,green:3,....
if (c == 2)
	printf("yellow");
	else if(c==1)
	printf("orange");
	..........
*/

int main()
{
	enum spectrum{red,orange,yellow,green,blue,violet};

	enum spectrum color;
	color = blue;
	printf("yellow");

	for (color = red; color <= violet; color++)
		printf("%d\n", color);

	printf("red=%d,orange=%d\n", red, orange);

	enum kids{jack,dash,snoopy,nano,pitz};
	enum kids my_kids = nano;

	printf("nano %d %d\n", my_kids, nano);

	enum levels { low = 100, medium = 500, high = 2000 };

	int score = 800;
	if (score > high)
		printf("high score!\n");
	else if (score > medium)
		printf("good job!\n");
	else if (score > low)
		printf("not bad.\n");
	else
		printf("do your best.\n");

	enum pet { cat, dog = 10, lion, tiger };

	printf("%d\n", cat);
}