#include <stdio.h>	// 전처리기(컴파일 하기 전에 처리)

int main()	//main 함수 정의 시작
{			//영역의 시작
	int a;
	int b;
	int c;	// 변수 선언

	a = 1;
	b = 2;	// 변수에 값 대입
	c = a + b;	//변수에 연산 결과 대입

	printf("Result is %i", c);	// 함수 호출
	
	return 0;	// 결과 값을 반환
}			// 영역의 끝