#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 3) return 0;

	for (int i = 0; i < n; i++) printf("*");
	printf("\n");
	for (int i = 0; i < n - 2; i++)
	{
		printf("*");
		for (int j = 0; j < n - 2; j++) printf(" ");
		printf("*\n");
	}
	for (int i = 0; i < n; i++) printf("*");

	return 0;
}