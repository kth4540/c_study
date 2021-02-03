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
	// -> ���� �Ŀ��� �ѹ��� �ʱ�ȭ �Ұ���

	/* addresses */

	printf("%p %p\n", high, &high[0]);
	//�ּҰ� ���� -> �迭�� �̸��� �Ҵ���� ������ ù��° �ּ���

	for (int i = 0; i < months; ++i)
		printf("%lld\n", (long long)&high[i]);
	printf("\n");
	// �ּҰ� 4 �������� ��������

	/* compiler doesn't check whether indices are valid */
//	high[12] = 4;	//runtime error
//	high[-1] = 123;	//runtime error

	/* const and array */
	const int low[3] = { -5,-1,1 };	//const�� ����Ǹ� ���ҵ� �� ���� �Ұ���
	//low[0]=5; -> error

	/*when array is not initialized */

	int not_init[4];	//try static(storage class)
	for (int i = 0; i < 4; ++i)	//�����Ⱚ�� ��
		printf("%d\n", not_init[i]);	

	/* partially initialized */
	int insuff[4] = { 2,4 };	// �����ϰ� �ʱ�ȭ�� �� ��� �������� 0���� �ڵ� �ʱ�ȭ
	for (int i = 0; i < 4; ++i)
		printf("%d\n", insuff[i]);	

	/* overlly initialized */
	//int over[2] = { 2,4,8,16 };	//error

	/* omitting size */
	//const int power_of_twos[] = { 1,2,4,8,16,32,64 };	// index ���Է½� �ڵ����� ������
	//printf("%d\n", sizeof(power_of_twos));	// �����Ҵ翡���� �̷� ������ �۵� �Ұ���
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(power_of_twos[0]));

	/* designated initializers */
	//int days[months] = { 31,28,[4] = 31,30,31,[1] = 29 ,5,6,7};
	//// �̷� ������ �����ؼ� �ʱ�ȭ�� ����, ���� �ʱ�ȭ �Ŀ��� �װ����� �ٽ� �ʱ�ȭ
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
	// index �� ����,0,�Ǽ��� �Է� �Ұ���
	float arr8[(int)1.5];	// ����ȯ���� ���� �Է� ����

	
}