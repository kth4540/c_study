#include <stdio.h>

int main()
{
	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i == 5)
	//		continue;	
	//	// contiune�� ������ �ٷ� ������ ���� ����Ŭ�� �Ѿ

	//	printf("%d ", i);
	//}

	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i == 5)
	//		break;
	//	// break�� ������ �ٷ� �� ������ ����

	//	printf("%d ", i);
	//}

	///* while and continue*/

	//int count = 0;
	//while (count < 5)
	//{
	//	int c = getchar();
	//	if (c == 'a')
	//		continue;
	//	putchar(c);
	//	count++;
	//}

	///* continue as a placeholder */
	//while (getchar() != '\n')
	//	continue;

	///*Need to use continue*/
	//char c;
	//while ((c = getchar()) != '\n')
	//{
	//	if (c == 'a')
	//		continue;	// �������� �ɷ����� ���ӽ�
	//	putchar(c);

	//	if (c != 'a')
	//					// ������ ó���ϴ� ���ӽ�
	//		putchar(c);
	//}
	/* break */

	//char c;
	//while ((c = getchar()) != '.')
	//	putchar(c);

	while (1)
	{
		char c = getchar();

		if (c == '.')
			break;

		putchar(c);
	}
	// �ڵ尡 ������������ �Ʒ� �ڵ��� ������ �� �˾ƺ��� ����

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (j == 5)
				break;	// ���� for ������ ������ �ٱ��� ������ �̵�
			printf("(%d %d)", i, j);
		}
		printf("\n");
	}

}