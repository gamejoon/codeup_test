#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]\n", a * 10000, b * 1000, c * 100, d * 10, e);
	return 0;
}