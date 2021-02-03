#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PRINT(X,...) printf("message " #X":"__VA_ARGS__)

int main()
{
	double x = 48;
	double y;

	y = sqrt(x);
	PRINT(1, "x=%g\n", x);
	printf("message" "1" ": " "x=%g\n", x);

}