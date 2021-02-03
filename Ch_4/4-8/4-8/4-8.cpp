#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%10i\n", 1234567);	// -> 숫자 : 칸맞춤
	printf("%-10i\n", 1234567); // ->  '-' = 줄맞춤
	printf("%+i %+i\n", 123,-123);// -> '+' = 양수에도 '+'기호
	printf("% i\n% i\n", 123,-123);	// -> 공백 : 양수면 공백, 음수면 '-' 기호
	printf("%X\n", 17);	// -> %X : 16진수로 출력
	printf("%#X\n", 123);	//-> # : 0(8진수), 0x(16진수) 출력
	printf("%05i\n", 123);	//-> %0 : 칸맞춤 공백 자리에 0 출력
	printf("%*i\n", 7, 456);//-> * : 앞 숫자(7)이 * 자리에 들어감 -> 
							//-> printf("%7i\n", 456); 와 같음

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);	//정밀도 최소 3 -> 그대로 출력
	printf("%.5d\n", 1024); //정밀도 최소 5 -> 01024 출력
	printf("%.3f\n", 123456.1234567);	//소수점 정밀도 3
	printf("%.3f\n", 123456.1234);		//소수점 정밀도 3
	printf("%10.3f\n", 123.45678);		//정밀도 10자리 ,소수점 정밀도 3
										//->   123.457
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJKLMN");//-> ABCDE까지만 출력됨
	printf("%.s\n", "ABCDEFGHIJKLMN"); //.0s와 같음 -> 출력되지 않음

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);	//hhd-> char, hd -> short
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);	//overflow


}