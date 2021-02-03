#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
		fopen() mode string for binary IO
		-"rb","wb","ab"
		-"ab+","a+b"
		-"wb+","w+b"
		-"ab+","a+b"

		C11 'x'mode fails if the file exists, istead of overwriting
		"wx","wbx","w+x","wb+x","w+bx"
	*/
	//writing example
	{
		FILE* fp = fopen("binary_file", "wb");

		double d = 1.0 / 3.0;
		int n = 123;
		int* parr = (int*)malloc(sizeof(int) * n);
		for (int n = 0; n < 123; ++n)
			*(parr + n) = n * 2;

		fwrite(&d, sizeof(d), 1, fp);
		fwrite(&n, sizeof(n), 1, fp);
		fwrite(parr, sizeof(int), n, fp);

		fclose(fp);
	}
	
	//reading example
	{
		FILE* fp = fopen("binary_file", "rb");
		double d;
		int n = 0;
		fread(&d, sizeof(d), 1, fp);
		fread(&n, sizeof(n), 1, fp);

		int* parr = (int*)malloc(sizeof(int) * n);

		fread(parr, sizeof(int), n, fp);

		printf("feof=%d\n", feof(fp));

		printf("%f\n", d);
		printf("%d\n", n);
		for (int i = 0; i < n; ++i)
			printf("%d ", *(parr + i));
		printf("\n");

		fread(&n, sizeof(n), 1, fp);

		printf("feof=%d\n", feof(fp));
		printf("ferror=%d\n", ferror(fp));

		fwrite(&n, sizeof(n), 1, fp);

		printf("ferror = %d\n", ferror(fp));

		fclose(fp);

	}
	return 0;
}