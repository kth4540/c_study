#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void f1()
{
	return;
}

int f2(char i)
{
	return i + 1;
}

int main()
{
	void(*pf1)() = f1;
	//void(*pf1)()=&f1;

	// return type과 parameter 가 있어야 함수포인터 선언 가능
	// 함수의 이름 자체가 주소임
	// 함수가 저장되는 곳은 text segment
	// 함수를 실행시킴-> 함수가 저장된 곳의 메모리에 접근함
	int(*pf2)(char) = f2;
	
	(*pf1)();
	//pf1();

	int a = (*pf2)('A');
	//int a=pf2('A');

	printf("%d\n", a);
}