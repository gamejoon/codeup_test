#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 3 || n > 99 || n % 2 == 0) return 0;

	for (int i = 0; i < (n + 1) / 2; i++)
	{
		for (int j = 0; j < (n - (2 * i + 1)) / 2; j++) printf(" ");
		for (int j = 0; j < 2 * i + 1; j++) printf("*");
		printf("\n");
	}

	return 0;
}