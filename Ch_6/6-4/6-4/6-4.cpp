#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	//fabs()-> �־��� ���� ������ ��ȯ

int main()
{
	/*
		relational operators (���迬����)
		<		is less than
		<=		is than or equal to
		==		is equal to
		>=		is greater than or equal to
		>		is greater than
		!=		is not equal to
	*/

	//int n = 0;
	//while (n++ < 5)		//n++<5 is a relational expression
	//	printf("%d\n", n);

	//char c = 'A';
	//while (c != 'Z')
	//	printf("%c\n", c++);

	const double PI = 3.14159265358979323846;
	double guess = 0.0;

	printf("Input pi : ");
	scanf("%lf", &guess);
	//while (guess != PI)	//-> !=�� �Ǽ� �񱳿����� �� ������ ����-> ���е����� �¾ƶ���������
	while(fabs(guess-PI)>0.01)	//�Է°�-PI���� ���� ���̰� 0.01 �̸��� ���
	{
		printf("Fool! Try again.\n");
		scanf("%lf", &guess);
	}

	printf("Good!");
}