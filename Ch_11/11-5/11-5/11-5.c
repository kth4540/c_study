#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	puts() which doesn't add anew line at the end
	use pointer increment operator and putchar()
*/

void custom_put1(const char* str);	// only two lines
int custom_put2(const char* str);	//add \n,return # of characters

int main()
{
	/*
		puts() : add \n at the end
	*/

	//char str[60] = "string array initialized";
	//const char* ptr = "a pointer initialized";

	//puts("string without \\n");
	//puts("end");
	//puts(&str[3]);
	//puts(ptr + 3);
	//puts(str[3])); -> error

	/* string without \0 */

	//char str[] = { 'h','i','!' };	// no \0 at the end
	//puts(str);

	/* puts() and fputs() */

	//char line[100];
	//while (gets(line))
	//	puts(line);

	//char line[100];
	//while (fgets(line, 100, stdin))
	//	fputs(line, stdout);

	/* printf() */

	//char str[] = "just do it, do it!";
	//printf("%s\n", str);
	//puts(str);

	char input[100] = "";
	int ret = scanf("%10s", input);
	printf("%s\n", input);	//just 만 출력
	ret = scanf("%10s", input);
	printf("%s\n", input);	//do 만 출력

	custom_put1("just");
	custom_put1("do it");

	printf("%d\n", custom_put2("12345"));

	return 0;
}

void custom_put1(const char* str)
{
	while (*str != '\0')
		putchar(*str++);
}

int custom_put2(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		putchar(*str++);
		count++;
	}
	return count;
}