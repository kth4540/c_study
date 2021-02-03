#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define month 12
#define year 3

void print_data(double* data)
{
	for (int i = 0; i < month; ++i)
		printf("\t%.1lf", data[i]);
	printf("\n");
}

void print_year_avr(double* data)
{
	double sum = 0;
	for (int i = 0; i < month; ++i)
		sum += data[i];
	printf("%lf\n", sum / (double)month);
}

int main()
{
	double year2016[month] = { -3.2,0.2,7.0,14.1,19.6,23.6,26.2,28.0,23.1,16.1,6.8,1.2 };
	double year2017[month] = { -1.8,-0.2,6.3,13.9,19.5,23.3,26.9,25.9,22.1,16.4,5.6,-1.9 };
	double year2018[month] = { -4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6 };

	/*
		1. use 2d array
		2. print data
		3. calculate and print average temperatures of 3 years
		4. calculate and print monthly average temperatures for 3 years
	*/

	double y_m_data[year][month] =
	{ { -3.2,0.2,7.0,14.1,19.6,23.6,26.2,28.0,23.1,16.1,6.8,1.2 },
	{ -1.8,-0.2,6.3,13.9,19.5,23.3,26.9,25.9,22.1,16.4,5.6,-1.9 } ,
	{ -4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6 } };
	
	printf("year index : ");
	for (int i = 0; i < month; ++i)
		printf("\t%d", i + 1);
	printf("\n");

	printf("year 0     :");
	print_data(y_m_data[0]);
	printf("year 1     :");
	print_data(y_m_data[1]);
	printf("year 2     :");
	print_data(y_m_data[2]);

	printf("year 0     :");
	print_year_avr(y_m_data[0]);


}