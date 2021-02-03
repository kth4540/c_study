#include <stdio.h>

int main()
{
	float n1 = 3.14; //4byte ->printf로 복사되는 과정에서 8byte로 변환
	double n2 = 1.234; //8byte
	int n3 = 1024;	//4byte

	printf("%f %f %d\n", n1, n2, n3);

	printf("%d %d %d\n\n", n1, n2, n3);			//4, 4, 4
	printf("%lld, %lld, %lld\n\n", n1, n2, n3);	//8, 8, 4	->type이 맞지 않아서 에러(float->int로 강제 변형)
	printf("%f %d %d\n\n", n1, n2, n3);			//8, 4, 4	-> 메모리 사이즈가 맞지 않아 n3도 오류
	printf("%f %lld %d\n\n", n1, n2, n3);		//8, 8, 4	-> 메모리 사이즈는 맞지만 n2가 type이 맞지 않음

}