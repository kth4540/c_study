#include <stdio.h>

int main()
{
	const int two = 2;	//two는 수정 불가능한 L-value(여기서 =는 대입이 아니라 초기화)

	int a;
	int b;
	int c;	//a,b,c는 수정 가능한 L-value

	a = 42;	//42는 R-value
	b = a;
	c = two * (a + b);	//(a+b)는 R-value(프로그램이 계산하는 임시 값, 끝나면  사라짐)
}