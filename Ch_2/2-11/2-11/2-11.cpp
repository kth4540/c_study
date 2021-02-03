#include <stdio.h>



int main()
{
	int n1, n2, n3, n4;

	n1 = 2;
	n2 = n1 * n1;
	n3 = n2 * n1;
	n4 = n2 * n1;	//n3 * n1 의도했지만 문맥 오류(문법은 문제 없음)

	return 0;
}

