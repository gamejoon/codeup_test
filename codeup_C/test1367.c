#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 2 || n > 99) return 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1 - i; j > 0; j--) printf(" ");
		for (int j = 0; j < n; j++) printf("*");
		printf("\n");
	}

	return 0;
}