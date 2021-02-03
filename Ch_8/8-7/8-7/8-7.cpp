#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[255];
	int i, i2;
	double d;
	//input = hello 123 3.14
	scanf("%s %d %lf", str, &i, &d);
	printf("%s %d %f\n", str, i, d);	//현재 '\n'는 아직 버퍼에 남아있음

	//input = hello 123 3.14
	scanf("%s %d %d", str, &i, &i2);	//scanf()에서 '\n'는 %c로 받지 않는 이상 무시함
										//콘솔이 다시 입력을 받는 상태가 되면 새로운 입력은 원래 있던 버퍼 위에 덮어씌워짐
	printf("%s %d %d\n", str, i, i2);

	//scanf()는 빈칸을 구분으로 인식하지만
	//getchar()는 빈칸도 문자로 인식함

	char c;
	while ((c = getchar()) != '\n')
		putchar(c);
	printf("\n");

	// 첫번째 scanf()에서는 문제 없이 입력
	// 2번째 scanf()에서 i2는 정수 3까지만 버퍼를 읽고 scanf() 종료 -> 버퍼에는 .14가 남아있음
	// 이후 .14는 getchar()에서 버퍼를 읽어서 나머지 .14 문자로 출력
	return 0;
}