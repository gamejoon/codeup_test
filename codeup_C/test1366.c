#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 3 || n > 99 || n % 2 == 0) return 0;

	for (int i = 0; i < n; i++) printf("*");
	printf("\n");

	for (int i = 0; i < n / 2 - 1; i++)
	{
		printf("*");
		for (int j = 0; j < i; j++) printf(" ");
		printf("*");
		for (int j = 0; j < n / 2 - 2 - i; j++) printf(" ");
		printf("*");
		for (int j = 0; j < n / 2 - 2 - i; j++) printf(" ");
		printf("*");
		for (int j = 0; j < i; j++) printf(" ");
		printf("*\n");
	}

	for (int i = 0; i < n; i++) printf("*");
	printf("\n");

	for (int i = n / 2 - 2; i >= 0; i--)
	{
		printf("*");
		for (int j = 0; j < i; j++) printf(" ");
		printf("*");
		for (int j = 0; j < n / 2 - 2 - i; j++) printf(" ");
		printf("*");
		for (int j = 0; j < n / 2 - 2 - i; j++) printf(" ");
		printf("*");
		for (int j = 0; j < i; j++) printf(" ");
		printf("*\n");
	}

	for (int i = 0; i < n; i++) printf("*");
	printf("\n");

	return 0;
}