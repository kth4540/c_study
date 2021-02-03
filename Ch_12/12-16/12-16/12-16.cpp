#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 10;
	int* ptr = NULL;
	ptr = (int*)calloc(n, sizeof(int));	
	//n*sizeof(int) 만큼 메모리 할당
	//calloc()는 메모리 할당과 동시에  0으로 초기화를 해줌
	if (!ptr)
		exit(1);

	for (int i = 0; i < n; ++i)
		ptr[i] = i + 1;

	n = 20;

	int* ptr2 = NULL;

	ptr2 = (int*)realloc(ptr, n * sizeof(int));
	//새로 추가해준 메모리는 초기화하지 않음

	printf("%p %p\n", ptr, ptr2);

	for (int i = 0; i < n; i++)
		printf("%d ", ptr2[i]);
	
	free(ptr);
	free(ptr2);

	return 0;
	
}