#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("i love apple.\n");

	//cmd 창에서 cd Desktop\C\Ch_8\8-3\Debug(디렉토리 이동)
	//8-3.exe > output.txt (출력 방향을 콘솔에서 output.txt로 재지정)

	char str[100];
	scanf("%s", str);
	printf("i love %s\n", str);

	//debug 폴더에 input.txt 파일 생성 후 melon 입력
	//8-3.exe < input.txt (입력 방향을 콘솔에서 input.txt로 재지정)
}