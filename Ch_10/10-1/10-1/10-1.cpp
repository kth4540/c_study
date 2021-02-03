#include <stdio.h>

int main()
{
	/* mothly temperatures */

	int high[12] = { 2,5,11,18,23,27,29,30,26,20,12,4 };
	int low[12] = { -7,-5,1,7,13,18,22,22,16,9,2,-5 };

	for (int i = 0; i < 12; ++i)
		printf("%d %d\n", high[i], low[i]);

	//int arr[4] = { 2,5,11,18 };	바로 초기화도 가능

	int arr[4];
	arr[0] = 2;
	arr[1] = 5;
	arr[2] = 11;
	arr[3] = 18;

	// 배열 선언 시 주소가 연속적으로 나옴(type size에 맞춰서)
	//&arr[0] &arr[1] &arr[2] ....-> int type 이므로 4 간격으로 연속적
	//[] 안의 index는 첫 주소와의 거리를 의미


}