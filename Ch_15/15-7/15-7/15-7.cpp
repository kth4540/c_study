#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MASK_SWORD (1<<0)
#define MASK_SHLELD (1<<1)
#define MASK_POTION (1<<2)
#define MASK_GUNTLET (1<<3)
#define MASK_HAMMER (1<<4)
#define MASK_KEY (1<<5)
#define MASK_SRING (1<<6)
#define MASK_AMULET (1<<7)

void char_binary(const char num);
void int_binary(const int num); 
int main()
{
	char flags = 0;
	char_binary(flags);

	printf("\nturnings bits on (setting bits)\n");

	flags = flags | MASK_SWORD;
	char_binary(flags);

	flags |= MASK_AMULET;
	char_binary(flags);

	printf("\nturnings bits off (cleaning bits)\n");
	
	flags = flags | MASK_POTION;
	char_binary(flags);
	
	flags = flags & ~MASK_POTION;
	char_binary(flags);

	printf("\ntoggling bits\n");

	flags = flags ^ MASK_HAMMER;
	char_binary(flags);

	flags = flags ^ MASK_HAMMER;
	char_binary(flags);

	printf("\nchecking the value of a bit\n");

	if ((flags & MASK_KEY) == MASK_KEY)
		printf("you can enter.\n");
	else
		printf("you can't enter\n");

	printf("\ntrimming\n");

	int int_flag = 0xffffffff;
	int_binary(int_flag);

	int_flag &= 0xff;
	int_binary(int_flag);

	return 0;
}

void char_binary(const char num)
{
	printf("decimal %3d\t==binary ", num);

	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const char mask = 1 << (bits - 1 - i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}

void int_binary(const int num)
{
	printf("decimal %3d\t==binary ", num);

	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; ++i)
	{
		const int mask = 1 << (bits - 1 - i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}