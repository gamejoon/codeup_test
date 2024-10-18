#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[16];

	if (scanf("%s", str) != 1) return 0;

	if (strcmp(str, "love") == 0) printf("I love you.\n");

	return 0;
}