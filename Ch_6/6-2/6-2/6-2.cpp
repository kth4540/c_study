#include <stdio.h>

//Pseudo code(�ǻ� �ڵ�) -> �Ϲ����� ���� �˰����� ����� �ڵ�
//Ư���� ��Ģ�� ����

int main()
{
	int num, sum = 0;	//sum�� 0���� �ʱ�ȭ�Ѵ�
	int status;

	printf("Enter an integer(q to quit) : ");	//����ڿ��� �ȳ��Ѵ�

	status = scanf("%d", &num);//����ڿ��� �Է��� �޴´�

	while (status == 1)			//�Է��� ������ ���ȿ���
	{
		sum = sum + num;		//�� �Է��� sum�� ���Ѵ�
		printf("Enter an integer(q to quit) : ");
		status = scanf("%d", &num);//����ڿ��� ������ �Է��� �޴´�
	}
	printf("Sum=%d\n", sum);//sum�� ����Ѵ�

	// -> � �� ����ϴ��� ��� ���� ���� ����
	// -> ��κ� ����� �ۼ�

}