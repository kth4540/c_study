#include <stdio.h>

int main()
{
	printf("Integer divisions\n");
	printf("%d\n", 14 / 7);
	printf("%d\n", 7 / 2);	
	printf("%d\n", 7 / 3);
	printf("%d\n", 7 / 4);	// �Ҽ����� �߶�(�ݿø� �ƴ�)

	printf("Truncating toward zero(C99)\n");
	printf("%d\n", -7 / 2);
	printf("%d\n", -7 / 3);
	printf("%d\n", -7 / 4);	// �Ҽ����� �߶�(�ݿø� �ƴ�)

	printf("\nFloating divisions\n");
	printf("%f\n"), 9.0 / 4.0;
	printf("%f\n"),9.0/4;	//4�� ����
}