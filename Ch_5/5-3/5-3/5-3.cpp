#include <stdio.h>

int main()
{
	printf("%d\n", 1 + 2);

	int income, salary, bonus;

	income = (salary = (bonus = 100));

	salary = 100;
	bonus = 30;

	income = salary + bonus;	//->salary+bonus = R-value(임시값이므로)

	int takehome, tax;
	tax = 20;
	takehome = income - tax;

	int a, b;
	a = -7;
	b = -a;
	b = +a;	//여기서 +는 무의미

	return 0;
}