#include <stdio.h>

int main()
{
	int size = 15, cost;
	if (size < 10)
		goto a;	//label
	goto b;	//label

a:cost = 50 * size;
b:cost = 100 * size;

	char c;
read: c = getchar();
	putchar(c);
	if (c == '.') goto quit;
	goto read;
quit:

	// goto���� cpu�� ������ �۵��Ǵ� ���¿� ������
	// ������ ����� ����ϱ⿡�� ���� ���� ������
	// goto�� ����� �ʿ䰡 ����
}