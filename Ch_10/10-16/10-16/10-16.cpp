#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define rows 3
#define cols 4

int sum2d_1(int ar[rows][cols]);//->[]안의 rows 값은 의미가 없음
int sum2d_2(int ar[][cols], int row);
int sum2d_3(int* ar, int row, int col);

int main()
{
	int data[rows][cols] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,0,1,2}
	};

	printf("%d\n", data[2][3]);

	int* ptr = &data[0][0];

	printf("%d\n", *(ptr + 3 + cols * 2));
}

int sum2d_1(int ar[rows][cols])
{
	int r, c, tot = 0;
	for (r = 0; r < rows; r++)
		for (c = 0; c < cols; c++)
			tot += ar[r][c];
	return tot;
}

int sum2d_2(int ar[][cols], int row)
{
	int r, c, tot = 0;
	for (r = 0; r < row; r++)
		for (c = 0; c < cols; c++)
			tot += ar[r][c];
	return tot;
}

int sum2d_3(int* ar, int row, int col)
{
	int r, c, tot = 0;
	for (r = 0; r < row; r++)
		for (c = 0; c < col; c++)
			tot += *(ar + c + col * r);	//ar[c+col*r]
	return tot;
}

/*
	in higher dimensions,
	you may omit the value in the left-most bracket

	int my_function(int ar[][5][8][3],int rows)
*/