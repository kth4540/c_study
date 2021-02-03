#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void char_to_binary(unsigned char uc)
{
	const int bits = CHAR_BIT * sizeof(unsigned char);
	for (int i = bits - 1; i >= 0; i--)
		printf("%d", (uc >> i) & 1);
}

void print_binary(char* data, int bytes)
{
	for (int i = 0; i < bytes; ++i)
		char_to_binary(data[bytes - 1 - i]);
	printf("\n");
}
int main()
{
	struct items
	{
		bool sword : 1;
		bool shield : 1;
		bool potion : 1;
		bool guntlet : 1;
		bool hammer : 1;
		bool key : 1;
		bool ring : 1;
		bool amulet : 1;
	}items_flag;

	printf("size=%zd\n", sizeof(items_flag));

	items_flag.sword = 0;
	items_flag.shield= 0;
	items_flag.ring = 0;

	print_binary((char*)& items_flag, sizeof(items_flag));

	union
	{
		struct items bf;
		unsigned char uc;
	}uni_flag;

	uni_flag.uc = 0;
	uni_flag.bf.amulet = true;
	uni_flag.uc |= (1 << 5);
	print_binary((char*)&uni_flag, sizeof(uni_flag));
	uni_flag.bf.key = false;
	print_binary((char*)&uni_flag, sizeof(uni_flag));

	struct file_time
	{
		unsigned int seconds : 5;//(0~29)*2
		unsigned int minutes : 6;//(0~59)
		unsigned int hours : 5;//(0~23)
	};

	struct file_date
	{
		unsigned int day : 5;	//1~31
		unsigned int month : 4;	//1~12
		unsigned int year:7	//1980~
	}fd;

	fd.day = 28;
	fd.month = 12;
	fd.year = 8;

	printf("day: %u, month: %u, year: %u\n", fd.day, fd.month, fd.year);

	return 0;
}
