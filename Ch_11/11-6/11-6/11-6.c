#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void fit_str(char*, unsigned int);

int main()
{
	/* strlen() : returns length of the string */
	// '\0'을 만날 때 까지의 문자열의 길이

	//char msg[] = "just,"" do it!";
	//puts(msg);
	//printf("length of %d\n", strlen(msg));
	//fit_str(msg, 4);
	//puts(msg);
	//printf("length of %d\n", strlen(msg));

	/* strcat() and strncat() : string concatenation */
	// 문자열을 추가함 strncat()-> 문자 갯수 지정

	//char str1[100] = "first string";
	//char str2[] = "second string";

	//strcat(str1, ", ");
	//strcat(str1, str2);
	//strncat(str1, str2, 2);
	//puts(str1);

	/* strcmp() and strncmp() : compare strings */

	//printf("%d\n", strcmp("A", "A"));	// 같으면 0
	//printf("%d\n", strcmp("A", "B"));	// 앞의 ascii code가 더 작으면 -1
	//printf("%d\n", strcmp("B", "A"));	//앞의 ascii code가 더 크면 1
	//printf("%d\n", strcmp("Banana", "Bananas"));
	//printf("%d\n", strncmp("Bananas", "Banana",6));

	/* strcpy() and strncpy() */

	//char dest[100];
	//char source[] = "start programming";
	//strcpy(dest, source);	//\0 is not added
	//strncpy(dest, source, 5);
	//strcpy(dest, source + 6);

	/* sprintf */
	//char str[100] = "";
	//int i = 123;
	//double d = 3.14;
	//sprintf(str, "%05d.png %f", i, d);
	//puts(str);

	/* any more */
	printf("%s\n", strchr("hello world", 'w'));
	// 'w'의 포인터 반환
	printf("%s\n", strchr("hello world", "ABCDE"));
	printf("%s\n", strchr("hello world", "abcde"));
	// "abcde" 중에 문자열에 포함되는 단어부터 시작
	

	return 0;
}

void fit_str(char* str, unsigned int size)
{
	if (strlen(str) > size)
		str[size] = '\0';
}