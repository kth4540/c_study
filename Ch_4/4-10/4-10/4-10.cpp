#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>

int main()
{
	//int i;
	//float f;
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);	//scanf���� double�� �Է¹������� �� lf��
	//printf("%d %f %s\n", i, f, str);

	///* character */
	//char c;
	//scanf("%c", &c);	//����(space) �� �Է����� ����
	//printf("%i\n", c);	//���� �Է½� ���ڷ� 32 ���

	///*Unsigned as signed*/
	//unsigned i;	// unsigned = unsigned int
	//scanf("%i", &i);
	//printf("%i\n", i);	
	//// ������ �־ ����� ������ ���� : ������ �޾� �޸𸮿� �����ߴٰ�
	//// signed �������� ����ؼ� -> �̷� ����� �򰥷��� ���� ����

	///* Unsigned as unsigned */
	//unsigned i2;
	//scanf("%u", &i2);
	//printf("%u\n", i2);
	//// ������ �־ unsigned �������� ����ϸ� ���� �߻�

	///*  floating point numbers */
	////l for double for %f, %e, %E, %g
	//double d = 0.0;
	//scanf("%lf", &d);	//scanf ���� %f�� ������ �޸� ������ ���̷� ����
	//printf("%f\n", d);

	///* Width */
	//char str[30];
	//scanf("%5s", str);
	//printf("%s\n", str);

	///* h modifier */
	//char i;
	//scanf("%hhd", &i);	//-> hhd : char ,hd : short
	//printf("%i\n", i);

	///* integer with characters */
	//int i;
	//scanf("%i", &i);
	//printf("%i\n", i);	//���ڸ� ������ �� �������� ���ڸ� ���

	///* j modifier */
	//intmax_t i;
	//scanf("%ji", i);
	//printf("%ji", i);

	///* Regular characters */
	//int a, b;
	//scanf("%d ,%d", &a, & b);
	//printf("%d %d\n",a,b);

	///* char recevies blank */
	//int a, b;
	//char c;
	//scanf("%d%c%d", &a, &c, &b);
	//printf("%d|%c|%d", a, c, b);

	///* return value of scanf() */
	//int a, b;
	//int i = scanf("%d%d", &a, &b);
	//printf("%d", i);	// scanf�� ��ȯ�� : �Է¹��� ����

	///* *modifier for printf() */
	//int i = 123;
	//int width = 5;
	//printf("Input width: ");
	//scanf("%f", &width);
	//printf("%*d\n", width, i);

	/* *modifier for scanf() */
	int i;
	scanf("%*d %*d %d", &i);
	printf("Your third input = %d", i);

	return 0;

}