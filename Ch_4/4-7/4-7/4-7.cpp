#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	double d = 3.14159265389734509825309287465234675892;

	printf("%c\n", 'A');
	printf("%s", "I Love you\n");
	printf("Even if there's a small chance,\
	owe this to everyone who's nmot in this room to try,\n");	//-> \ 없으면 에러

	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX); //-> %signed에 unsigned max 값을 넣어 overflow 발생
	printf("%u %u %u\n", 1024, -1, UINT_MAX); // unsigned 에 음수를 넣어 overflow 발생

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d);	// lf는 무시됨 -> float 출력 시 printf 내부에서 double로 변경
	printf("%a %A\n", d, d);	//16진수 출력
	printf("%e %E\n", d, d);	//부동소수점 출력

	printf("\n");
	printf("%g %G\n", 123456.789, 1234567.89); //%g -> f를 사용할지 g를 사용할지 자동 선택
	printf("%G %G\n", 123456.789, 1234567.89);
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);

	printf("\n");
	printf("%o\n",9); //8진수
	printf("%p\n", &d);	// 포인터

	printf("\n");
	printf("%x %X\n", 11, 11);	// 16진수
	printf("%%\n", d);	// %기호 출력 , d는 무시됨

	printf("\n");
	printf("%9d\n", 12345);	//자릿수를 맞춤 -> 9d= 최소 9자리
	printf("%09d\n", 12345);//자릿수를 맞춤 -> 09d = 남는 칸을 0으로 채움
	printf("%.2f\n", 3.141592);// 일정 자릿수까지만 출력 -> .2f = 2자리까지 출력
	printf("%.20f %.20lf\n", d, d);

	printf("\n");
	int n_printed = printf("Counting!");
	printf("%u\n", n_printed);	//출력된 글자 갯수

}

