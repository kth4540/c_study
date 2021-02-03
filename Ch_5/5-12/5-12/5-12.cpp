#include <stdio.h>

void draw(int n);

int main()
{
	int i = 5;
	char c = '#';
	float f = 7.1f;

	draw(i);	//i�� arguments(�μ�, ���ԵǴ� ��)
	draw(c);
	draw(f);

	/* Arguements(�μ�) vs. Parameters(�Ű�����) */
	// actual argument, actual parameter -> arguments(values)
	// formal argument, formal parameter -> parameter(variables)
}

void draw(int n)	//int n �� parameter(�Ű�����)
{
	int tmp = 0;
	while (tmp < n)
	{
		printf("*");
		++tmp;
	}
	printf("\n");
}