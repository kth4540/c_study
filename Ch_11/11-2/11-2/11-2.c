#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/* array versus pointer */
	const char* pt2 = "i am a string!";
	const char* pt3 = "i am a string!";
	const char* pt4 = "i am a string!!!!!";	//<- different

	const char ar1[] = "i am string!";
	const char ar2[] = "i am string!";
	const char ar3[] = "i am string!!!!!";	//<- different

	printf("rodata low \t%llu %llu %llu %llu\n",
		(unsigned long long)pt2, (unsigned long long)pt3,
		(unsigned long long)pt4,(unsigned long long)"i am a string!");
	// pt2,pt3,"i am a string!이 완전히 동일하므로 같은 메모리 주소에서 사용함


	printf("stack high \t%llu %llu %llu\n",
		(unsigned long long)ar1, (unsigned long long)ar2,
		(unsigned long long)ar3);	//check address number
	// 각각 배열마다 메모리를 가지고 있으므로 주소가 다름

	/* local variables */

	printf("stack high \t%llu %llu %llu\n",
		(unsigned long long) & pt2, (unsigned long long) & pt3,
		(unsigned long long) & pt4);
	int i;

	printf("stack high \t%llu\n", (unsigned long long) & i);

	//ar1++; -> error
	pt2++;	//-> ok
	puts(pt2);	//check the first character

	/* array and pointer differences */

	char heart[] = "i love kelly!";
	const char* head = "i love helly!";

	for (int i = 0; i < 6; ++i)
		putchar(heart[i]);
	putchar('\n');

	for (int i = 0; i < 6; ++i)
		putchar(head[i]);
	putchar('\n');

	/* pointer addition */
	for (int i = 0; i < 6; ++i)
		putchar(*(heart + i));
	putchar('\n');

	while (*(head) != '\0')
		putchar(*(head++));

	head = heart;
	//heart = head;	-> error

	heart[7] = 'a';
	*(heart + 7) = 'k';

	char* word = "google";
	//word[2] = 'o';	//runtime error
	puts(word);

	const char* str1 = "when all the lights are low, ...";
	const char* copy;
	copy = str1;

	printf("%s %p %p\n", str1, str1, &str1);
	printf("%s %p %p\n", copy, copy, &copy);

};