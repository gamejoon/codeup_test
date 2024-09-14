#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;

	if (scanf("%c", &c) != 1) return 0;

	printf("%c\n", c);

	return 0;
}