#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[31];

	if (scanf("%[^\n]s", str) != 1) return 0;

	printf("%s\n", str);

	return 0;
}