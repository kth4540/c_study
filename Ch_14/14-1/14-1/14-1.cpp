#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 10

struct Patient
{
	char name[MAX_NAME];
	float height;
	float weight;
	int age;
};

int main()
{
	Patient p1, p2, p3;

	p1.height = 180;
	p1.weight = 90;

	p2.height = 180;
	p2.weight = 120;

	return 0;
}