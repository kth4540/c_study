#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	//strlen()
#include <stdbool.h>

#define width 40
#define name "KTH"
#define address "ANSAN"

//void print_char(char c, int n_stars, bool line); -> prototype

void print_char(char c, int n_stars,bool line)
//����=�Ű�����=parameter
//�μ�=argument
//�� �Լ����� �Ű������� c, n_stars, line, �μ��� �Ű������� ������ ���� ��
{
	for (int i = 0; i < n_stars; ++i)
		printf("%c", c);

	if (line == true)
		printf("\n");
}
// �μ��� � ���̳Ŀ� ���� �Լ��� ����� �޶���-> �Լ��� �Ű�����ȭ

void print_centeered_str(char str[])
{
	int n_blanks = 0;
	n_blanks = (width - strlen(str)) / 2;
	print_char(' ', n_blanks, false);
	printf("%s\n", str);
}

// �Լ��� prototype �� �־ build ��ü�� ������(compile error�� ����)
// ��� linking error �� �߻�


int main()
{

	print_char('*', width,true);

	print_centeered_str(name);
	print_centeered_str(address);

	print_char('*', width,false);	//���� ����� 2�� �̻� �ݺ��Ǹ� �Լ�ȭ

	return 0;
}