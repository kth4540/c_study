#include <stdio.h>
#include <limits.h>	//INT_MAX, ....
#include < float.h>	//FLT_MAX, ....

#define PI 3.141592

int main()
{
	printf("PI is  %f\n", PI);
	printf("Biggest int : %d\n", INT_MAX);
	printf("One byte in this system is %d bits\n", CHAR_BIT);
	printf("Smallst normal float %e\n", FLT_MIN);
}