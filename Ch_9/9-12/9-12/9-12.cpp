#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 7;

	int* a_ptr = &a;	//*a_ptr�� int �ڷ����̶�� �ǹ�
						//a_ptr�� a�� �ּҰ� ����
	*a_ptr = 8;			
	//���� ����(indirection),������(dereferencing),���� ������(redirection)
	//�ּҰ��� ���� �޸𸮸� ã�ư� �� ����
	int c = 9;
	
	c += *a_ptr;

	printf("%d\n", c);
}