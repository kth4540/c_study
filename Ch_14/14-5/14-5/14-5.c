#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LEN 20

typedef struct
{
	char given[LEN];	//first name
	char family[LEN];	//last name
}name;

typedef struct
{
	name guest;
	name host;
	char food[LEN];
	char place[LEN];

	int year;
	int month;
	int day;
	int hour;
	int minute;
}reserve;

int main()
{
	reserve res = {
		.guest = {"nick","carraway"},
		.host = {"jay","gatsby"},
		.place = {"mansion"},
		.food = {"chicken"},
		.year = 1925,
		.month = 4,
		.day = 10,
		.hour = 18,
		.minute = 30
	};

	return 0;
}