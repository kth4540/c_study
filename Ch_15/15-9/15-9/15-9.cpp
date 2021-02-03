#include <stdio.h>


int main()
{
	struct item
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


	items_flag.amulet = 1;

	return 0;
}