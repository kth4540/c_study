#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	printf("%f\n", cos(3.141592));

	double c = 5.0, b = 4.0, a;
	a = sqrt(c * c - b * b);
	printf("a=%f\n", a);

	float cf = 5.0f, bf = 4.0f, af;
	af = sqrtf(cf * cf - bf * bf);
	printf("af=%f\n", af);

	return 0;
}