#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 9) return 0;

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j < n * i; j++) printf("*");
		printf("\n");
	}

	return 0;
}