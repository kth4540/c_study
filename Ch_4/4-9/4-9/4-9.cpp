#include <stdio.h>

int main()
{
	float n1 = 3.14; //4byte ->printf�� ����Ǵ� �������� 8byte�� ��ȯ
	double n2 = 1.234; //8byte
	int n3 = 1024;	//4byte

	printf("%f %f %d\n", n1, n2, n3);

	printf("%d %d %d\n\n", n1, n2, n3);			//4, 4, 4
	printf("%lld, %lld, %lld\n\n", n1, n2, n3);	//8, 8, 4	->type�� ���� �ʾƼ� ����(float->int�� ���� ����)
	printf("%f %d %d\n\n", n1, n2, n3);			//8, 4, 4	-> �޸� ����� ���� �ʾ� n3�� ����
	printf("%f %lld %d\n\n", n1, n2, n3);		//8, 8, 4	-> �޸� ������� ������ n2�� type�� ���� ����

}