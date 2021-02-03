#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_NAME 41

struct person	//person is a tag of structure
{
	char name[MAX_NAME];
	float height;
	int age;
};

int main()
{
	int flag;

	struct person genie;

	strcpy(genie.name, "will smith");
	//strncpy(genie.name,"will smith",MAX);
	/* dot(.) is structure membership operator*/

	genie.age = 1000;
	flag = scanf("%f", &genie.height);
	printf("%f\n", genie.height);	//&(genie.height)

	/* initialization */
	struct person princess = { "naomi scott",18,160.0f };
	struct person princess2 = { "naomi scott",18,160.0f };

	strcpy(princess.name, "naomi scott");

	/* designated initializers */
	struct person beauty = {
		.age = 20,
		.height = 180.0f,
		.name = "bell"
	};

	struct person* someone;

	someone = &genie;
	//someone=(struct person*)malloc(sizeof(struct person));

	someone->age = 100;
	printf("%s %d\n", someone->name, (*someone).age);
	return 0;

	struct book
	{
		char title[MAX_NAME];
		float price;
	};
	/* no tag */
	struct {
		char farm[MAX_NAME];
		float price;
	}apple, apple2;

	typedef struct person my_person;

	my_person p3;

	typedef struct person person;

	person p4;

	typedef struct {
		char name[MAX_NAME];
		char hobby[MAX_NAME];
	}friend;

	friend f4;

	return 0;
}