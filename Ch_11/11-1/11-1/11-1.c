#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define message "a symbolic string content"
#define maxlength 81
int main()
{
	char words[maxlength] = "a string in an array";
	const char* pt1 = "a pointer to a string";

	puts("puts() adds a newline at the end");	//puts() add \n at the end
	puts(message);
	puts(words);	//char words[21] removes this warning
	puts(pt1);
	words[3] = 'p';
	puts(words);
	//pt1[8] = 'A';	-> error
	//�迭�� �б�/���Ⱑ ��� ������ �޸𸮸� ���
	//���ڿ� ���ͷ��� �б� ���� �޸𸮿� ����ǹǷ� ���� �߻�

	char greeting[50] = "hello, and""how are""you""today!";

	printf("\" to be, or not to be \" hamlet said.\n");
	// " ��ü ��� -> \"

	printf("%s %p %c\n", "we", "are", *"excellent programmers");
	//are �� �ּ� -> 'a'�� ����� �ּ�
	// *"excellent programmers" -> ���ڿ��� ù��° �ּ� -> e

	const char m1[15] = "love you!";
	for (int i = 0; i < 15; ++i)
		printf("%d ", (int)m1[i]);	//note the null characters
	printf("\n");

	int n = 8;
	char cookies[1] = { 'a', };
	char cakes[2 + 5] = { 'a', };
	char pies[2 * sizeof(long double) + 1] = { 'a' };

	char truth[10] = "truth is ";
	if (truth == &truth[0])
		puts("true!");
	if (*truth == 't')
		puts("true!");
	if (*(truth+1) == truth[1])
		puts("true!");
	if (truth[1] == 'r')
		puts("true!");

}