#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	char  c;
	int rows, cols;

	//while (1)
	//{
	//	scanf("%c %d %d", &c, &rows, &cols);
	//	
	//	while (getchar() != '\n')
	//		continue;// ���� ����
	//		���۴� �� �� �Է��� �ް� ���Է��� ���� �� ���� �����

	//	display(c, rows, cols);
	//	if (c == '\n')
	//		break;	//����� �۵����� ����
	//}

	printf("Input one character and two integer : ");
	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		while (getchar() != '\n')
			continue;

		display(c, rows, cols);
	}

	return 0;
}

void display(char cr, int lines, int width)
{
	for (int i = 0; i < lines; ++i)
	{
		for (int j = 0; j < width; ++j)
			putchar(cr);
		printf("\n");
	}
}