#include <stdio.h>

int main()
{
	float money,target, count;
	int year = 0;
	printf_s("�Աݾ� : ");
	scanf_s("%f", &money);
	printf_s("��ǥ�ݾ� : ");
	scanf_s("%f", &target);
	printf_s("���� : ");
	scanf_s("%f", &count);

	while (money <= target)
	{
		money *= (1 + (0.01*count));
		year += 1;
		printf("%f\n", money);
	}
	printf("%d���� �ɸ�", year);
}