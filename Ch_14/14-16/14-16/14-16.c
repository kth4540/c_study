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

typedef union
{
	personal_owner po;
	company_owner co;
}data;

typedef struct
{
	char model[15];
	int status;	// 0=personal, 1=company
	data ownerinfo;
}car_data;

void print_car(car_data car)
{
	printf("car model : %s\n", car.model);

	if (car.status == 0)
		printf("personal owner : %s-%s-%s\n",
			car.ownerinfo.po.rrn1, car.ownerinfo.po.rrn2,
			car.ownerinfo.co.crn3);
}
int main()
{
	car_data my_car = { .model = "avante",.status = 0,.ownerinfo.po = {"830422","1185600"} };

	print_car(my_car);

	return 0;
}