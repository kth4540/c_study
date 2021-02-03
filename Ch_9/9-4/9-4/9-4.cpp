#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int int_max(int i, int j);

int int_max(int i, int j)
{
	int m;	//stack frame
	m = i > j ? i : j;
	return m;
}

int main()
{
	//m = 123;	-> 변수 m은 함수 int_max 에서만 유효함
	int a;	//변수는 메모리를 사용할 수 있게 하는 명칭

	a = int_max(1, 2);

	printf("%d\n", a);
	printf("%p\n", &a);	// 변수의 주소값을 직접 출력함

	{
		int a;
		a = int_max(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);
		// 같은 a지만 출력해보면 중괄호 안의 a는 메모리 주소가 다름
		// -> 영역이 다르므로 다른 변수임

		int b = 123;
	}
	// b = 123; ->b는 영역 밖의 변수이므로 접근할 수 없음
	printf("%d\n", a);
	printf("%p\n", &a);


}