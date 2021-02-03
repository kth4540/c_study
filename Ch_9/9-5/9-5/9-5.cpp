#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);

int int_max(int i, int j)
{
	int m;	
	m = i > j ? i : j;
	return m;
}

int main()
{

	int a;	//a가 스택에 쌓임    (a)

	a = int_max(1, 2);	
	// int_max를 실행하기 위해 m을 스택에 쌓음(a-m)
	// int_max 실행 완료 후 m은 스택에서 빠짐(a)
	{
		int b;	//b가 스택에 쌓임(a-b)
		b = int_max(4, 5);
		// int_max를 실행하기 위해 m을 스택에 쌓음(a-b-m)
		// int_max 실행 완료 후 m은 스택에서 빠짐(a-b)
		{
			int b = 123; // b를 스택에 쌓음(a-b-b)
			//중괄호 안의 b와 중괄호 밖의 b는 다른 변수임
		}
		//중괄호 밖으로 나가면서 b가 스택에서 빠짐(a-b)
		{
			int c = 456;	//c를 스택에 쌓음(a-b-c)
		}
		//중괄호 밖으로 나가면서 c가 스택에서 빠짐(a-b)
	}// b가 스택에서 빠짐(a)
	return 0;
}