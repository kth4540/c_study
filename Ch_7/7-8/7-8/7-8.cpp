#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>

#define PERIOD '.'

int main()
{
	//char ch;
	//int character = 0, words = 1, lines = 1;
	//printf("Enter text : ");
	//while ((ch = getchar()) != PERIOD)
	//{
	//	if (ch == ' ')
	//		words++;
	//	else if (ch == '\n')
	//	{
	//		words++;
	//		lines++;
	//	}
	//	else
	//		character++;
	//}
	//printf("Characters :%d, Words: %d, Lines: %d ", character, words, lines);

	char c;
	int n_chars = 0;
	int n_lines = 0;
	int n_words = 0;
	bool word_flag = false;
	bool line_flag = false;
	//	Note : flag

	printf("Enter text : ");

	while ((c = getchar()) != PERIOD)
	{
		if (isspace(c) == false)
			n_chars++;

		if (!isspace(c) && !line_flag)
			// line_flag �� false -> �� ���� �Էµ��� �ʾ���
			// ù �ܾ �ԷµǸ�
		{
			n_lines++;	// line �߰�
			line_flag = true;	// �� �Է� ǥ��
		}

		if (c == '\n')	//�ٹٲ��� �Ǹ�
			line_flag = false;	// �� �Է� ����

		if (!isspace(c) && !word_flag)
			// ��ĭ�� �ƴϰ� ���ο� �ܾ �Էµ��� �ʾҴٸ�
		{
			n_words++;	//�ܾ� �߰�
			word_flag = true;	//�ܾ� �Է� ǥ��
		}

		if (isspace(c))	//��ĭ�̸�	
			// isspace(c)�� ���̸� 0�� �ƴ� �� ��ȯ(1 ��ȯ �ƴ�)
			// isspace()�� ' ' �ܿ� '\n'�� ���� 
			word_flag = false;	//�ܾ� �Է� ����
	}

	printf("characters : %d, words : %d, lines : %d\n",
		n_chars, n_words, n_lines);
}