#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define size 5

int main()
{
	int my_arr[size];
	int sum = 0;

	//for (int i = 0; i < size; ++i)
	//	my_arr[i] = i;

	//for (int i = 0; i < size; ++i)
	//	printf("%d ",my_arr[i]);

	for (int i = 0; i < size; ++i)
	{
		printf("num : ");
		scanf("%d", &my_arr[i]);
		sum += my_arr[i];
	}
	printf("%d\n", sum);
	return 0;
}