#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main()
{
	/* typedef specifier
	- give symbolic names to types
	-does not create new types
	*/

	typedef unsigned char BYTE;	//note the scope of BYTE

	BYTE x, y[10] = { 0, }, * z = &x;
	{
		typedef unsigned char byte;	//can ues lowercase

		size_t s = sizeof(byte);	
		//unsigned int(x86),unsigned long long(x64)
	}

	time_t t = time(NULL);

	printf("%lld\n", t);

	/*typedef vs #define*/

	typedef char* STRING;

	STRING name = "john wick", sign = "world";

	typedef struct complex
	{
		float real;
		float imag;
	}COMPLEX;

	typedef struct { double width; double height; }rect;

	rect r1 = { 1.1,2.2 };
	rect r2 = r1;
	printf("%f %f\n", r1.height, r1.width);

	return 0;

}