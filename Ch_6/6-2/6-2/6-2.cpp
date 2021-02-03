#include <stdio.h>

//Pseudo code(의사 코드) -> 일반적인 언어로 알고리즘을 써놓은 코드
//특별한 규칙이 없음

int main()
{
	int num, sum = 0;	//sum을 0으로 초기화한다
	int status;

	printf("Enter an integer(q to quit) : ");	//사용자에게 안내한다

	status = scanf("%d", &num);//사용자에게 입력을 받는다

	while (status == 1)			//입력이 정수인 동안에는
	{
		sum = sum + num;		//그 입력을 sum에 더한다
		printf("Enter an integer(q to quit) : ");
		status = scanf("%d", &num);//사용자에게 다음번 입력을 받는다
	}
	printf("Sum=%d\n", sum);//sum을 출력한다

	// -> 어떤 언어를 사용하는지 상관 없이 이해 가능
	// -> 대부분 영어로 작성

}