#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FUNDLEN 50

typedef struct
{
	char bank_name[FUNDLEN];
	double bank_save;
	char fund_name[FUNDLEN];
	double fund_invest;
}fortune;

double sum(const fortune*);

int main()
{
	fortune my_fortune =
	{
		"wells-fargo",
		4032.27,
		"jpmorgan chase",
		8543.94
	};

	printf("total: $%.2f \n",
		//	sum(&my_fortune.bank_save, &my_fortune.fund_invest));
		sum(&my_fortune));

	return 0;
}

double sum(const fortune* f)
{
	return (f->bank_save + f->fund_invest);
};
