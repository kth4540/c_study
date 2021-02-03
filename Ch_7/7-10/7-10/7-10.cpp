#include <stdio.h>

int main()
{
	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i == 5)
	//		continue;	
	//	// contiune를 만나면 바로 루프의 다음 사이클로 넘어감

	//	printf("%d ", i);
	//}

	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i == 5)
	//		break;
	//	// break를 만나면 바로 그 루프가 끝남

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
	//		continue;	// 조건으로 걸러내는 뉘앙스
	//	putchar(c);

	//	if (c != 'a')
	//					// 간단히 처리하는 뉘앙스
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
	// 코드가 복잡해질수록 아래 코드의 패턴이 더 알아보기 쉬움

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (j == 5)
				break;	// 안쪽 for 루프가 끝나고 바깥쪽 루프로 이동
			printf("(%d %d)", i, j);
		}
		printf("\n");
	}

}