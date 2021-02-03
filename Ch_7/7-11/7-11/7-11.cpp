#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main()
{
	float max = -FLT_MAX;	// float의 최솟값
	float min = FLT_MAX;	//float의 최댓값 
	// -> 첫 input 이 어떤 값이 들어오든 min, max 값이 채워짐
	float sum = 0.0f;
	float input;
	int n = 0;
	printf("enter number : ");
	while (scanf("%f", &input) == 1)
	{
		if (input > 100.0f || input < 0.0f)
			continue;
		max = (max >= input) ? max : input;
		min = (min <= input) ? min : input;
		sum += input;

		n++;
	}

	if (n > 0)
		printf("min=%f, max=%f, ave=%f\n", min, max, sum / n);
	else
		printf("No input\n");

	return 0;
}