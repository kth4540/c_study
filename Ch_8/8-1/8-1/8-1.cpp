#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>//Wihdows, _getch(), _getche() -> ���۸� ������� ����

int main()
{
	char c;
	while ((c = _getche()) != '.')	
		putchar(c);
	// �ڵ常 ���� �� ���ھ� �Է¹޾Ƽ� ����ϴ°� ó�� ����
	return 0;
}