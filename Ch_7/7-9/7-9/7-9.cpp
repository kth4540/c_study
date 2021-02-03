#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	//int temp;
	//// 조건 ? A:B -> 조건이 true면 A, false면 B
	//temp = true ? 1024 : 7;	//조건이 true 이므로 temp=1024
	//printf("%d\n", temp);

	//temp = false ? 1024 : 7; //조건이 false 이므로 temp=7
	//printf("%d\n", temp);

	int number;
	scanf("%d", &number);


	const bool is_even = (number % 2 == 0) ? true : false;
	//const 는 써도 상관 없으면 쓰는것이 좋음

	if (is_even)
		printf("Even");
	else
		printf("Odd");
}