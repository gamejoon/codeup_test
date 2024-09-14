#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1 || num < 1) return 0;

	printf("%s\n", num % 7 == 0 ? "multiple" : "not multiple");

	return 0;
}