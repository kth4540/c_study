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
	name full_name;
	char mobile[LEN];
}friend;

int main()
{
	friend my_friend[2] =
	{
		{{"tom","clancy"},{"1234-5678"}},
		{{"rainbow","six"},{"1357-2468"}}
	};

	friend* boy_friend;
	boy_friend = &my_friend[0];
	printf("%zd\n", sizeof(friend));
	printf("%lld %s\n", (long long)boy_friend, boy_friend->full_name.given);
	// ->: indirect member access operator

	boy_friend++;
	printf("%lld %s\n", (long long)boy_friend, (*boy_friend).full_name.given);
	//* has higher precedence than *

	return 0;
}