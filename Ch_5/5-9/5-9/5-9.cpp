#include <stdio.h>

int main()
{


	int x, y, apples;	 //declaration statement(선언)
	apples = 3;	//assignment statement(정의)
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
	y = 1 + x++;	//	sequence points(';' 기호가 있을 때 실행을 한다)

	while (x++ < 10) //	(x++ < 10)	/ is a full expression. ->';' 가 없어도 계산이 된다
		printf("%d\n", x);

	y = (4 + x++) + (6 + x++);	// Not(4+x++) nor (6+x++) is a full expression.
}