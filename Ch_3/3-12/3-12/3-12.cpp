#include <stdio.h>
#include <float.h>

int main()
{
	//round-off errors(ex1)
	float a, b;
	a = 1.0e20f + 1.0f;
	b = a - 1.0e20f;
	printf("%f\n", b);	//결과=0.00000 
	// 이유 : 범위가 너무 다름(숫자 인식 한계)

	//round-off errors(ex2)
	float c = 0.0f;
	for (int i = 0; i < 100; ++i)
	{
		c = c + 0.01f;
	}
	printf("%f\n", c);	//결과=0.99999
	// 이유 : 분수부분을 2진수로 표현해야함 -> 정확한 값이 나오지 않을 수 있음 

	//overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);
	max = max * 100.0f;
	printf("%f\n", max);	//결과 : inf(측정불가-<float 최대치 초과)

	//underflow
	float min = 1.401298464e-45F;
	printf("%e\n", min);
	min = min / 100.0f;	//subnormal->정밀도를 모두 잃어버림
	printf("e\n", min);

	float tmp = 104.0f;
	tmp = tmp / 0.0f;
	printf("%f\n", tmp);
	return 0;
}