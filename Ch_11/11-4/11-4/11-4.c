#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define STRLEN 81



int main()
{
//	char* name = "";	->error
	//char name[128];
	//int result = scanf("%s", name);
	// 입력을 받으려면 공간을 미리 확보하고 그 다음에 입력받아야 문제가 없음

	/*
		scanf() vs gets()
		scanf() reads one word
		gets() reads one line and removes \n add \0
	*/

	char words[STRLEN] = "";
	gets(words);	
//	gets() receives pointer. no idea when string ends
//	-> 메모리 공간의 크기를 알 수는 없음
	gets_s(words,sizeof(words));
	int result=scanf("%s",words);

	printf("start\n");
	printf("%s", words);// no \n at the end
	puts(words);	// puts() adds \n at the end
	puts("ends");

	/* fgets() and fputs() */
	//char words[STRLEN] = "";
	//fgets(words, STRLEN, stdin);	//does not remove \n
	//int i = 0;
	//while (words[i] != '\n' && words[i] != '\0')
	//	i++;
	//if (words[i] == '\n')
	//	words[i] = '\0';

	//fputs(words, stdout);
	//fputs("ends", stdout);	// does not add \n

	/* small array */

	//char small_array[5];
	//puts("enter long strings");

	//printf("%p\n", small_array);
	//printf("%p\n", fgets(small_array, 5, stdin));
	//fgets(small_array, 5, stdin);	//4글자 + '\0' 까지만 받아짐

	//char small_array[5];
	//puts("enter long strings");
	//while (fgets(small_array, 5, stdin) != NULL && small_array[0] != '\n')
	//	fputs(small_array, stdout);

	/* scanf() */
	char str1[6], str2[6];
	//int count = scanf("%6s %6s", str1, str2);

	printf("%s|%s \n", str1, str2);
}