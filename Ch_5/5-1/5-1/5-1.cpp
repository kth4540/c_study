#include <stdio.h>

int main()
{
	int n = 1;
	while (n < 3)
	{
		printf("%d\n", n);
		n = n + 1;	// 반복문에서 조건은 필수
	}
	return 0;
}