#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>

int main()
{
	//int i;
	//float f;
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);	//scanf에서 double을 입력받을때는 꼭 lf로
	//printf("%d %f %s\n", i, f, str);

	///* character */
	//char c;
	//scanf("%c", &c);	//공백(space) 도 입력으로 받음
	//printf("%i\n", c);	//공백 입력시 숫자로 32 출력

	///*Unsigned as signed*/
	//unsigned i;	// unsigned = unsigned int
	//scanf("%i", &i);
	//printf("%i\n", i);	
	//// 음수를 넣어도 제대로 나오는 이유 : 음수를 받아 메모리에 저장했다가
	//// signed 형식으로 출력해서 -> 이런 방식은 헷갈려서 좋지 않음

	///* Unsigned as unsigned */
	//unsigned i2;
	//scanf("%u", &i2);
	//printf("%u\n", i2);
	//// 음수를 넣어서 unsigned 형식으로 출력하면 오류 발생

	///*  floating point numbers */
	////l for double for %f, %e, %E, %g
	//double d = 0.0;
	//scanf("%lf", &d);	//scanf 에서 %f로 받으면 메모리 사이즈 차이로 오류
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
	//printf("%i\n", i);	//문자를 만나면 그 전까지의 숫자만 출력

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
	//printf("%d", i);	// scanf의 반환값 : 입력받은 갯수

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