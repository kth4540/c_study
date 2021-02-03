#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%10i\n", 1234567);	// -> ���� : ĭ����
	printf("%-10i\n", 1234567); // ->  '-' = �ٸ���
	printf("%+i %+i\n", 123,-123);// -> '+' = ������� '+'��ȣ
	printf("% i\n% i\n", 123,-123);	// -> ���� : ����� ����, ������ '-' ��ȣ
	printf("%X\n", 17);	// -> %X : 16������ ���
	printf("%#X\n", 123);	//-> # : 0(8����), 0x(16����) ���
	printf("%05i\n", 123);	//-> %0 : ĭ���� ���� �ڸ��� 0 ���
	printf("%*i\n", 7, 456);//-> * : �� ����(7)�� * �ڸ��� �� -> 
							//-> printf("%7i\n", 456); �� ����

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);	//���е� �ּ� 3 -> �״�� ���
	printf("%.5d\n", 1024); //���е� �ּ� 5 -> 01024 ���
	printf("%.3f\n", 123456.1234567);	//�Ҽ��� ���е� 3
	printf("%.3f\n", 123456.1234);		//�Ҽ��� ���е� 3
	printf("%10.3f\n", 123.45678);		//���е� 10�ڸ� ,�Ҽ��� ���е� 3
										//->   123.457
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJKLMN");//-> ABCDE������ ��µ�
	printf("%.s\n", "ABCDEFGHIJKLMN"); //.0s�� ���� -> ��µ��� ����

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);	//hhd-> char, hd -> short
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);	//overflow


}