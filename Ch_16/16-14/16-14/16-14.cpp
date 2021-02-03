#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void goodbye(void)
{
	printf("goodbye\n");
}
void thankyou(void)
{
	printf("thankyou\n");
}

int main()
{
	printf("purchased?\n");
	if (getchar() == 'y')
		atexit(thankyou);

	while (getchar() != '\n')
	{
	};
	printf("goodbye message?\n");
	if (getchar() == 'y')
		atexit(goodbye);


	return 0;
}