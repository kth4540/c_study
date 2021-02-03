#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	char alphabet;	// 알파벳 변수
	int count;		// 줄 갯수 변수

	printf("count: ");
	scanf("%d", &count);	//줄 갯수 입력

	printf("alphabet : ");
	scanf("%c", &alphabet);	// 알파벳 입력

	
	
	for (int i = 0; i < count; ++i)
	{
		for (char j = 'a'; j <= alphabet; ++j)	//시작 알파벳 a 고정
			printf("%c ", j);
		printf("\n");
		
	}

	return 0;

	//////////////////

	//const int NUM_ROWS = 10;
	//const char FIRST_CHAR = 'A';
	//const char LAST_CHAR = 'K';

	//int r;
	//int c;

	//for (r = 0; r < NUM_ROWS; ++r)
	//{
	//	for (c = FIRST_CHAR; c <= LAST_CHAR; ++c)
	//		printf("%c ", c);
	//	printf("\n");
	//}

	//for (r = 0; r < NUM_ROWS; ++r)
	//{
	//	for (c = FIRST_CHAR; c <= FIRST_CHAR + r; ++c)
	//		printf("%c ", c);
	//	printf("\n");
	//}

	//for (r = 0; r < NUM_ROWS; ++r)
	//{
	//	for (c = FIRST_CHAR + r; c < FIRST_CHAR + NUM_ROWS; ++c)
	//		printf("%c ", c);
	//	printf("\n");
	//}
}