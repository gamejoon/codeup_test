#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_n(int);

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 99) return 0;

	int sum = sum_n(n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++) printf("%d ", sum--);
		printf("\n");
	}

	return 0;
}

int sum_n(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++) sum += i;

	return sum;
}