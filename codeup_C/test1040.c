#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1) return 0;

	printf("%d\n", -num);

	return 0;
}