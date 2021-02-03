#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>//Wihdows, _getch(), _getche() -> 버퍼를 사용하지 않음

int main()
{
	char c;
	while ((c = _getche()) != '.')	
		putchar(c);
	// 코드만 보면 한 글자씩 입력받아서 출력하는것 처럼 보임
	return 0;
}