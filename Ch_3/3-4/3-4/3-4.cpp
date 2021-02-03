#include <stdio.h>
int main()
{
	float won = 0.0f;
	float dollar = 0.0f;

	printf("input won\n");
	scanf("%f", &won);

	dollar = won * 0.00089f;	//f-> float형 상수

	printf("Dollar=%f\n", dollar);
	return 0;
}