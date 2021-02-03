#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])

//argv[]에 담긴 문자열이 몇개인지가 argc에 저장됨
{
	/* string to integer, double, long*/
	// atoi()<-int, atof()<-float, atol()<-long

	/* example 1*/
	if (argc < 3)
		printf("wrong usage of %s\n", argv[0]);
	//else
	//{
	//	int times = atoi(argv[1]);

	//	for (int i = 0; i < times; i++)
	//		puts(argv[2]);
	//}

	/*example 2*/

	//printf("sum=%d\n", atoi(argv[1]) + atoi(argv[2]));

	/*
		string to long, usigned long, double
		strtol(), strtoul(), strtod()

		strtod() converts base 10 only
	*/
	//char str1[] = "1024Hello";
	char* end;
	//long l = strtol(str1, &end, 10);	// 변환할 수 없는 곳을 만나면 그 곳을 end 포인터에 연결
	//printf("%s %ld %s %d\n", str1, l, end, (int)*end);

	char str2[] = "10FFHello";
	long l = strtol(str2, &end, 16);
	printf("%s %ld %s %d\n", str2, l, end, (int)*end);

	char tmp[100];
	puts(_itoa(10, tmp, 16));

	sprintf(tmp, "%x", 10);
	puts(tmp);
	return 0;

}