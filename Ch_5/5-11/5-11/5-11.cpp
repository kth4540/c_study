#include <stdio.h>

int main()
{
	/* promotions in assignments*/
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;

	// 작은 자료형->큰 자료형에 대입할 땐 문제가 없음
				//promotion(승진)

	/* demotion in assignments */
	d = 1.25;
	f = 1.25;
	f = 1.123;
	//큰 자료형 -> 작은 자료형에 대입할 땐 일부가 버려짐
	//demotion(강등,절삭)

	/* ranking of types in oprations */
// long double >double > float
// unsigned long long, long long
// unsigned long, long
// unsigned, int
// short int, unsigned short int
// signed char, char, unsigned char
// _Bool
	d = f + 1.234;	//f는 flaot, 1.234는 double->
				//->f를 double로 변환 후 d에 대입(f+1.234는 double) -> 문제없음
	f = f + 1.234;
	//double 값을 float에 대입-> data 손실

/* automatic promotion of function arguments */
//1. Functions without prototypes
//2. variadic functions
//-> 추후 설명

/* casting operators */
	d = (double)3.14f;	//의도적 형변환 ->3.14f는 double

	i = 1.6 + 1.7;	//결과값 3
	i = (int)1.6 + (int)1.7;	//의도적 형변환
								// -> 1+1 = 2

	/* more examples */

	char c;
	f = i = c = 'A';	//65	i->f에서 정수->실수 형변환
	printf("%c %d %f\n", c, i, f);
	c = c + 2;	// 'C', 67
	i = f + 2 * c;	// 65.0f + 2* 67
	printf("%c %d %f\n", c, i, f);
	c = 1106;	//demolition, 1106=0b10001010010
				//-> 0b01010010로 절삭=82='R' = 1106%256
	c = 83.99;	//절삭 -> 83 = 'S'
	return 0;
}