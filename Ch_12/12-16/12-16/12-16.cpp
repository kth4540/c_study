#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 10;
	int* ptr = NULL;
	ptr = (int*)calloc(n, sizeof(int));	
	//n*sizeof(int) ��ŭ �޸� �Ҵ�
	//calloc()�� �޸� �Ҵ�� ���ÿ�  0���� �ʱ�ȭ�� ����
	if (!ptr)
		exit(1);

	for (int i = 0; i < n; ++i)
		ptr[i] = i + 1;

	n = 20;

	int* ptr2 = NULL;

	ptr2 = (int*)realloc(ptr, n * sizeof(int));
	//���� �߰����� �޸𸮴� �ʱ�ȭ���� ����

	printf("%p %p\n", ptr, ptr2);

	for (int i = 0; i < n; i++)
		printf("%d ", ptr2[i]);
	
	free(ptr);
	free(ptr2);

	return 0;
	
}