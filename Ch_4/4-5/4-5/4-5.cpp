#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f

int main()
{
	float radius, area, circum;
	printf("Input radius\n");
	scanf("%f", &radius);

	area = PI* radius * radius;	//넓이
	circum = 2.0f * PI * radius;	//둘레
	printf("Area is %f\n", area);
	return 0;
}