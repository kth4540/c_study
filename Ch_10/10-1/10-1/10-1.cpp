#include <stdio.h>

int main()
{
	/* mothly temperatures */

	int high[12] = { 2,5,11,18,23,27,29,30,26,20,12,4 };
	int low[12] = { -7,-5,1,7,13,18,22,22,16,9,2,-5 };

	for (int i = 0; i < 12; ++i)
		printf("%d %d\n", high[i], low[i]);

	//int arr[4] = { 2,5,11,18 };	�ٷ� �ʱ�ȭ�� ����

	int arr[4];
	arr[0] = 2;
	arr[1] = 5;
	arr[2] = 11;
	arr[3] = 18;

	// �迭 ���� �� �ּҰ� ���������� ����(type size�� ���缭)
	//&arr[0] &arr[1] &arr[2] ....-> int type �̹Ƿ� 4 �������� ������
	//[] ���� index�� ù �ּҿ��� �Ÿ��� �ǹ�


}