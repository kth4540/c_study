#include <stdio.h>

int main()
{


	int x, y, apples;	 //declaration statement(����)
	apples = 3;	//assignment statement(����)
	;	//null statement
	7;
	1 + 2;
	x = 4;
	++x;
	x = 1 + (y = 5);	//	y = 5 is subexpression
	while (x++ < 10)//	while statement(structured statements)
		y = x + y;

	printf("%d\n", y);	//function statement
		return 0;		//return statement

	/*side effects and sequence points*/

	x = 4;	//	main intent is evaluating expressions
	y = 1 + x++;	//	sequence points(';' ��ȣ�� ���� �� ������ �Ѵ�)

	while (x++ < 10) //	(x++ < 10)	/ is a full expression. ->';' �� ��� ����� �ȴ�
		printf("%d\n", x);

	y = (4 + x++) + (6 + x++);	// Not(4+x++) nor (6+x++) is a full expression.
}