#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//	int arr[2][3] = { {1,2,3} ,{4,5,6} };
		// �迭�� �̸��� �� ��ü�� �ּ���
		// arr == arr[0] == &arr[0] == &a[0][0] != a[0][0]
		// arr[0]�� �ι�° �ε����� �ٴ� �迭�� �̸���-> arr[0]�� �ּ�
		// ���� ������ �������� ���� &arr[0]�� arr[0]�� �ּҰ��̶�� ������ �� ����
		// ������ �迭���� �ּҸ� ���� �����ϴ� �޸� ������ ����
		// ���� arr[0]==&arr[0]

		//a[0][0]==**arr

	float arr2d[2][4] = { {1.0f,2.0f,3.0f,4.0f},{5.0f,6.0f,7.0f,8.0f} };


	//printf("%u\n", (unsigned)arr2d);
	//printf("%u\n", (unsigned)arr2d[0]);
	//printf("\n");

	////arr2d points to arr2d[0] (not arr2d[0][0])
	//// arr2d -> arr2d[0] -> arr2d[0][0]�� ����

	//printf("%u\n", (unsigned)*arr2d);	// == arr2d[0]
	//printf("%u\n", (unsigned)&arr2d[0]);// == *arr2d == &arr2d[0][0]
	//printf("%u\n", (unsigned)&arr2d[0][0]); // == &arr2d[0]
	//printf("%f %f\n", arr2d[0][0], **arr2d);	// double indirection ���� �� ���

	//printf("\n");

	//printf("%u\n", (unsigned)(arr2d + 1));
	//printf("%u\n", (unsigned)&arr2d[1]);
	//printf("%u\n", (unsigned)(arr2d[1]));
	//printf("%u\n", (unsigned)(*(arr2d + 1)));	// ������ ����
	//printf("%u\n", (unsigned)(&arr2d[0] + 1));
	//printf("%u\n", (unsigned)(&arr2d[1][0]));

	//printf("%f\n", *(*(arr2d + 1) + 2));

	float(*pa)[4];	// a single pointer to an array of 4 floats
	// -> 4���� float�� ���� �迭�� ���� ������ (1��) 
	// -> float a[4] ���� �迭�� ���� ������
	float* ap[2];	// an array of two pointers to float
	// float �����͸� 2�� ���� �迭 (2��)

	printf("%zu\n", sizeof(pa));
	printf("%zu\n", sizeof(ap));
	printf("\n");

	pa = arr2d;
	//pa[0] = arr2d[0];	-> error
	//pa[1] = arr2d[1];	-> error
	// �����Ͱ� 1���̹Ƿ� �Ұ���

	//ap = arr2d; -> error
	// �����Ͱ� �迭 �����̹Ƿ� �Ұ���
	ap[0] = arr2d[0];
	ap[1] = arr2d[1];

	printf("%u %u\n", (unsigned)pa, (unsigned)(pa + 1));
	// pa�� ������ 1��-> �ּ� ��ü�� ���� -> arr2d[0]
	printf("%u %u\n", (unsigned)ap, (unsigned)(ap + 1));
}