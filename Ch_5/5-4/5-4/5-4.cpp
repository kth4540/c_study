#include <stdio.h>

int main()
{
	float money,target, count;
	int year = 0;
	printf_s("입금액 : ");
	scanf_s("%f", &money);
	printf_s("목표금액 : ");
	scanf_s("%f", &target);
	printf_s("이율 : ");
	scanf_s("%f", &count);

	while (money <= target)
	{
		money *= (1 + (0.01*count));
		year += 1;
		printf("%f\n", money);
	}
	printf("%d년이 걸림", year);
}