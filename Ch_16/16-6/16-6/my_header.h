#pragma once

extern int status;

static int si = 0;	// file scope

int add(int a, int b);

static int multiply(int a, int  b)
{
	return a * b;
}

inline int subtract(int a, int b)
{
	return a - b;
}