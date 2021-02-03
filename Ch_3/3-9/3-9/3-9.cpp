#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{
	int i;
	int32_t i32;	// 이 변수가 가지는 메모리는 32bit로 고정
	int_least8_t i8;// 이 변수가 가지는 메모리는 적어도 8bit
	int_fast8_t f8;	// 8bit 중에서 가장 빠른
	intmax_t imax;	//가장 큰
	uintmax_t uimax;//가장 큰

	i32 = 1004;

	printf("me32=%d\n", i32);
	printf("me32=%" "d" "\n", i32);
	printf("me32=%" PRId32 "\n", i32);
}