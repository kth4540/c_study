#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* count()
{
	int ct = 0;
	printf("count =%d %lld\n", ct, (long long)&ct);
	ct++;
	 return &ct;
}

void count_caller()
{
	count();
}

int* static_count()
{
	static int ct = 0;	//initialized only once
	printf("static count = %d %lld\n", ct, (long long)&ct);
	ct++;
	return &ct;
}

void static_counter_caller()
{
	static_count();
}

//int func(static int i)	//warning
//{
//
//}
int main()
{
	count();
	count();
	count_caller();	//�޸𸮰� ���Ӱ� ������

	static_count();
	static_count();
	static_counter_caller();	//�޸� �ּҰ� ����

	return 0;
}