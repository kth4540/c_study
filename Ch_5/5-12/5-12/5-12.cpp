#include <stdio.h>

void draw(int n);

int main()
{
	int i = 5;
	char c = '#';
	float f = 7.1f;

	draw(i);	//i는 arguments(인수, 대입되는 값)
	draw(c);
	draw(f);

	/* Arguements(인수) vs. Parameters(매개변수) */
	// actual argument, actual parameter -> arguments(values)
	// formal argument, formal parameter -> parameter(variables)
}

void draw(int n)	//int n 은 parameter(매개변수)
{
	int tmp = 0;
	while (tmp < n)
	{
		printf("*");
		++tmp;
	}
	printf("\n");
}