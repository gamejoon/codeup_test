#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[11];

	if (scanf("%s", str) != 1) return 0;

	for (int i = 0; str[i] != '\0'; i++) if (str[i] == 't') printf("%d ", i + 1);

	return 0;
}