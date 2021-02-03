#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	int sum = 0;
	//int status = 0;

	//printf("Enter an integer (q to quit): ");
	//status = scanf("%d", &num);	//num에 문자는 입력되지 않음 -> 반환값 0
	//							//scanf의 반환값은 입력 갯수

	//while (status==1)
	//{
	//	sum += num;
	//	printf("Enter an integer(q to quit) : ");
	//	status = scanf("%d", &num);
	//}

	//printf("sum=%d\n", sum);

	/*C-style shortcut*/

	printf("Enter an integer (q to quit): ");
	while(scanf("%d", &num) == 1)
	{
		sum += num;
		printf("Enter an integer (q to quit): ");
	}
	printf("sum=%d\n", sum);



	return 0;
}