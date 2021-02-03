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

	// goto문은 cpu가 실제로 작동되는 형태와 유사함
	// 하지만 사람이 사용하기에는 좋지 않은 형태임
	// goto는 사용할 필요가 없음
}