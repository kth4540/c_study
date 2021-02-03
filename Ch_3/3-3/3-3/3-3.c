//#define _CRT_SECURE_NO_WARNINGS

// 프로젝트 우클릭 -> properties -> c/c++ -> preprocessor ->
// preprocessor definitions 에서 Edit 후 추가
// Debug , Release 둘 다 설정해야함

#include <stdio.h>
int main()
{
	int i = 0;

	scanf("%d", &i);	// 변수 앞에 &가 있으면 변수의 주소를 받아옴
	
	printf("Value is %d\n", i);
	
	return 0;
}