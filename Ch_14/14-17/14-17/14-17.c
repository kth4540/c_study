#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	char rrn1[7];
	char rrn2[8];
}personal_owner;

typedef struct
{
	char crn1[4];
	char crn2[3];
	char crn3[6];
}company_owner;



typedef struct
{
	char model[15];
	int status;	// 0=personal, 1=company
	union
	{
		personal_owner po;
		company_owner co;
	};
}car_data;

typedef struct
{
	union
	{
		struct { double x, y };
		struct { double i, j };
		struct { double arr[2] };
	};
}vec2;


void print_car(car_data car)
{
	printf("car model : %s\n", car.model);

	if (car.status == 0)
		printf("personal owner : %s-%s-%s\n",
			car.po.rrn1, car.po.rrn2,
			car.co.crn3);
}
int main()
{
	car_data my_car = { .model = "avante",.status = 0,.po = {"830422","1185600"} };

	print_car(my_car);

	vec2 v = { 3.14,2.99 };
	printf("%.2f,%.2f\n", v.x, v.y);
	printf("%.2f,%.2f\n", v.i, v.j);
	printf("%.2f,%.2f\n", v.arr[0], v.arr[1]);

	return 0;
}