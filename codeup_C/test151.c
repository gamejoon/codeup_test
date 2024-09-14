#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1 || num < 1) return 0;

	if (num < 10) printf("small\n");

	return 0;
}