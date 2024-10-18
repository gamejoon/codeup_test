#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1) return 0;

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++) printf("*");
		printf("\n");
	}

	return 0;
}