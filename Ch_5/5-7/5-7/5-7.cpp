#include <stdio.h>

int main()
{
	//int sec = 0, min = 0, hour = 0;


	//printf("Input seconds : ");
	//scanf_s("%d", &sec);

	//hour = sec / 3600;
	//min = (sec % 3600) / 60;
	//sec = sec - (hour * 3600) - (min * 60);

	//printf("%d / %d / %d\n", hour, min, sec);

	int div,mod;

	div = 11 / 5;
	mod = 11 % 5;
	printf("div=%d,mod=%d\n", div, mod);
	
	div = 11 / -5;
	mod = 11 % -5;
	printf("div=%d, mod=%d\n", div, mod);

	div = -11 / -5;
	mod = -11 % -5;
	printf("div=%d, mod=%d\n", div, mod);

	div = -11 / 5;
	mod = -11 % 5;
	printf("div=%d, mod=%d\n", div, mod);
	
	// -> ���������� ���� �ǿ����ڰ� ������ ������ ����
	return 0;
}