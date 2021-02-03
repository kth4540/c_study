#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define months 12

int main()
{
	/* basic usages */

	int high[months] = { 2,5,11,18,23,27,29,30,26,20,12,4 };

	//for (int i = 0; i < months; ++i)
	//	printf("%d", high[i]);
	//printf("\n");

	//float avg = 0.0;
	//for (int i = 0; i < months; ++i)
	//	avg += high[i];
	//printf("average=%f\n", avg / (float)months);

	//high[0] = 1;
	//high[1] = 2;

	//high[months] = { 2,5,11,18,23,27,29,30,26,20,12,4 };
	// -> 선언 후에는 한번에 초기화 불가능

	/* addresses */

	printf("%p %p\n", high, &high[0]);
	//주소가 같음 -> 배열의 이름은 할당받은 공간의 첫번째 주소임

	for (int i = 0; i < months; ++i)
		printf("%lld\n", (long long)&high[i]);
	printf("\n");
	// 주소가 4 간격으로 연속적임

	/* compiler doesn't check whether indices are valid */
//	high[12] = 4;	//runtime error
//	high[-1] = 123;	//runtime error

	/* const and array */
	const int low[3] = { -5,-1,1 };	//const로 선언되면 원소들 값 변경 불가능
	//low[0]=5; -> error

	/*when array is not initialized */

	int not_init[4];	//try static(storage class)
	for (int i = 0; i < 4; ++i)	//쓰레기값이 들어감
		printf("%d\n", not_init[i]);	

	/* partially initialized */
	int insuff[4] = { 2,4 };	// 부족하게 초기화를 할 경우 나머지는 0으로 자동 초기화
	for (int i = 0; i < 4; ++i)
		printf("%d\n", insuff[i]);	

	/* overlly initialized */
	//int over[2] = { 2,4,8,16 };	//error

	/* omitting size */
	//const int power_of_twos[] = { 1,2,4,8,16,32,64 };	// index 미입력시 자동으로 맞춰줌
	//printf("%d\n", sizeof(power_of_twos));	// 동적할당에서는 이런 식으로 작동 불가능
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(power_of_twos[0]));

	/* designated initializers */
	//int days[months] = { 31,28,[4] = 31,30,31,[1] = 29 ,5,6,7};
	//// 이런 식으로 지정해서 초기화도 가능, 지정 초기화 후에는 그곳부터 다시 초기화
	//for (int i = 0; i < months; ++i)
	//	printf("%d ", days[i]);

	/* specifying array sizes */

	int arr1[months];
	double arr2[123];
	float arr3[3 * 4 + 1];
	float arr4[sizeof(int) + 1];
	//float arr5[-10];
	//float arr6[0];
	//float arr7[1.5];
	// index 에 음수,0,실수는 입력 불가능
	float arr8[(int)1.5];	// 형변환으로 정수 입력 가능

	
}