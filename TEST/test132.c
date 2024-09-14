#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[9];

	if (scanf("%s", str) != 1) return 0;

	printf("%s\n", str);

	return 0;
}