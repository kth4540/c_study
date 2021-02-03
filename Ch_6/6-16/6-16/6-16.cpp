#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define num_days 365

int main()
{
	char my_chars[] = "Hello, world!";

	int daily_temperature[num_days];
	double stock_prices_history[num_days];

	printf("%zd\n", sizeof(stock_prices_history));
	printf("%zd\n", sizeof(double) * num_days);
	printf("%zd\n", sizeof(stock_prices_history[0]));

	int my_numbers[5];

	my_numbers[0] = 1;	//subscripts,indices(index), offsets
	my_numbers[1] = 3;
	my_numbers[2] = 4;
	my_numbers[3] = 2;
	my_numbers[4] = 1024;

	scanf("%d", my_numbers);	//&my_numbers[0] = my_numbers

	/* runtime error */
	//my_numbers[5] = 123; ->out of bound(6¹øÂ° index)
	//my_numbers = 7;	//compile error
	return 0;
}