#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	simulation of a moving object

	- speed=1.0m/s
	- dt=1.0s
	- distance traveled during dt = speed* dt

	*/



	const double speed = 1.0;
	const unsigned repeat_max = 100;

	double dt = 1.0;
	double time = 0.0;
	double dist = 0.0;

	for (unsigned i = 0; i < repeat_max; ++i)
	{
		dist += speed * dt;
		time += dt;

		printf("Elapsed time = %.10fs, Distance = %.10fm\n", time, dist);

		dt *= 0.5;
	}

}