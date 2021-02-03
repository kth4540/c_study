#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	//fabs()-> 넣어준 값의 절댓갑을 반환

int main()
{
	/*
		relational operators (관계연산자)
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
	//while (guess != PI)	//-> !=는 실수 비교에서는 잘 쓰이지 않음-> 정밀도까지 맞아떨어져야함
	while(fabs(guess-PI)>0.01)	//입력값-PI값의 절댓값 차이가 0.01 미만일 경우
	{
		printf("Fool! Try again.\n");
		scanf("%lf", &guess);
	}

	printf("Good!");
}