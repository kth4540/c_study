#include <stdio.h>

int main()
{
	/* promotions in assignments*/
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;

	// ���� �ڷ���->ū �ڷ����� ������ �� ������ ����
				//promotion(����)

	/* demotion in assignments */
	d = 1.25;
	f = 1.25;
	f = 1.123;
	//ū �ڷ��� -> ���� �ڷ����� ������ �� �Ϻΰ� ������
	//demotion(����,����)

	/* ranking of types in oprations */
// long double >double > float
// unsigned long long, long long
// unsigned long, long
// unsigned, int
// short int, unsigned short int
// signed char, char, unsigned char
// _Bool
	d = f + 1.234;	//f�� flaot, 1.234�� double->
				//->f�� double�� ��ȯ �� d�� ����(f+1.234�� double) -> ��������
	f = f + 1.234;
	//double ���� float�� ����-> data �ս�

/* automatic promotion of function arguments */
//1. Functions without prototypes
//2. variadic functions
//-> ���� ����

/* casting operators */
	d = (double)3.14f;	//�ǵ��� ����ȯ ->3.14f�� double

	i = 1.6 + 1.7;	//����� 3
	i = (int)1.6 + (int)1.7;	//�ǵ��� ����ȯ
								// -> 1+1 = 2

	/* more examples */

	char c;
	f = i = c = 'A';	//65	i->f���� ����->�Ǽ� ����ȯ
	printf("%c %d %f\n", c, i, f);
	c = c + 2;	// 'C', 67
	i = f + 2 * c;	// 65.0f + 2* 67
	printf("%c %d %f\n", c, i, f);
	c = 1106;	//demolition, 1106=0b10001010010
				//-> 0b01010010�� ����=82='R' = 1106%256
	c = 83.99;	//���� -> 83 = 'S'
	return 0;
}