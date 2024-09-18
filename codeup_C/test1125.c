#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1) return 0;

	printf("%o %X\n", num, num);

	return 0;
}