#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
	int arr[2][3] = { {1,2,3},{4,5,6} };
	// 2차원 배열이지만 메모리상으로는 1차원

	printf("%d\n\n", arr[1][1]);

	for (int j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 3; ++i)
			printf("%d ", arr[j][i]);

		printf("\n");
	}
	printf("\n");

	int* ptr = &arr[0][0];
	for (int k = 0; k < 6; ++k)
		printf("%d ", ptr[k]);
	// 포인터로 만들고 1차원 배열로 사용할 수 있음
	// 내부적으로는 1차원 배열이라서 가능
	printf("\n\n");

	printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));

	// 3차원배열도 가능하고 2차원 배열과 사용방법도 동일하지만
	// 그 이상의 배열은 나중에
}