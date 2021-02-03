#include <stdio.h>

int main()
{
	//int a = 0;
	//a++;
	//printf("%d\n", a);

	//++a;
	//printf("%d\n", a);

	//double b=0;
	//b++;
	//printf("%f\n", b);
	//++b;
	//printf("%f\n", b);

	//int count = 0;
	//while (++count < 10) // count++ or ++count
	//{
	//	printf("%d\n", count);
	//}

	//int i = 1, j = 1;
	//int i_post, pre_j;

	//i_post = i++;
	//pre_j = ++j;
	//printf("%d %d\n", i, j);
	//printf("%d %d\n", i_post, pre_j);

	//int i = 3;
	//int l = 2 * --i;
	//printf("%d %d\n", i, l);

	//i = 1;
	//l = 2 * i--;
	//printf("%d %d\n", i, l);

	/*very high precedence*/
	//int x, y, z;
	//x = 3, y = 4;
	//z = (x + y++) * 5;

	//printf("%d %d %d\n", x, y, z);

	/* ++ and - affect modifiable lvalues*/
	int x = 1, y = 1, z;
	z = x * y++;
	//z=(x+y)++; ->error
	//z=3++; -> error

	/*Bad practice*/
	int n = 1;
	//printf("%d %d", n, n * n++);	시스템마다 결과가 다를 수 있음
	//int x = n / 2 + 5 * (1 + n++);	식을 쪼개서 의도를 명확히
	//int y = n++ + n++;	 헷갈리지 않게


}