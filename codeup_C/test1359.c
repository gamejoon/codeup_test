#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 99) return 0;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) printf("%d ", j);
		printf("\n");
	}

	return 0;
}