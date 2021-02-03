#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>

#define PERIOD '.'
int main()
{
	/*
		Logical operators
		&& : and
		|| : or
		!  : not	단항연산자
	*/

	//bool test1 = 3 > 2 || 5 > 6;	// true
	//bool test2 = 3 > 2 && 5 > 6;	//false
	//bool test3 = !(5 > 6);			//true,equivalent to 5<=6

	//printf("%d %d %d\n", test1, test2, test3);

	//char ch;
	//int count = 0;

	//while ((ch = getchar()) != PERIOD)
	//{
	//	if (ch != '\n' && ch != ' ')
	//		count++;
	//}
	//printf("%d", count);

	//int a = 1, b = 2, c = 3, d = 4;

	//a > b&& b > c || b > d;
	//((a > b) && (b > c)) || (b > d);
	//위보다 아래처럼 괄호로 묶는게 더 확실하고 보기 편함

	/*
		Short-circuit evaluation

		- Logical expressionss are evaluated from left to right
		- && and || are sequence points
	*/

	//int temp = (1 + 2) * (3 + 4);	// 21

	//printf("Before : %d\n", temp);

	//if (temp == 0 && (++temp == 1024))
	//{
	//	// temp==0에서 false가 확정되었으므로
	//	// 오른쪽의 ++temp는 계산되지 않고 넘어감
	//	// -> After도 증가되지 않고 21임
	//};

	//printf("After : %d\n", temp);

	//int x = 1, y = 2;
	//if (x++ > 0 && x + y == 4)
	//	printf("%d %d\n", x, y);

	//결과값 : 2 2
	// && , ||는 sequence points-> 그 전의 expression 값이 계산됨
	// x++>0 && 에서 값이 먼저 계산되고, x는 2로 증가됨
	// 그 후 x+y==4 에서 x는 2이므로 true

	/* Ranges */
	
	//for (int i = 0; i < 100; ++i)
	//	if (i >= 10 && i <= 20)
	//		printf("%d ", i);

	//printf("\n");

	//for (int i = 0; i < 100; ++i)
	//	if (10 <= i <= 20)	
			// (10<=i)는 반환값이 0(false) or 1(true)
			//1<=20, 0<=20은 항상 true
			//문법상으로는 문제가 없지만 의도와는 다른 '문맥 오류'

	for (char c = 0; c < 127; ++c)
		if (c >= 'a' && c <= 'z')
			printf("%c ", c);

	printf("\n");

	for (char c =0; c < 127; ++c)
		if (islower(c))
			printf("%c ", c);

	return 0;
}