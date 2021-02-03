#include <stdio.h>
#include <stdlib.h>

struct MyStruct
{
	int i;
	float f;
};
int main()
{
	/* 1. sizeof basic types */

	/*int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof(int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a);	//-> size_t=unsigned -> 이식성이 높음
	size_t float_size = sizeof(float);

	printf("size of int type is %u bytes\n", int_size1);
	printf("size of int type is %zu bytes\n", int_size4);	//->size_t 대응 형식지정자: zu
	printf("size of float type is %zu bytes\n", float_size);*/

	/* 2.  sizeof array */

	int int_arr[30];	// int type 메모리공간 30개
	
	int* int_ptr = NULL;	//포인터
	int_ptr = (int*)malloc(sizeof(int) * 30);	//메모리 공간 할당

	printf("Size of array = %zu bytes\n", sizeof(int_arr));
	printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));

	/* 3. sizeof character array */
	char c = 'a';
	char string[10];	// 최대 9글자 + '\0'

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char type us %zu bytes\n", char_size);
	printf("Size of string type is %zu bytes\n", str_size);

	/* 4. sizeof structure */
	
	printf("%zu\n", sizeof(struct MyStruct));
}