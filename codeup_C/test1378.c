#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int seq(int);

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 0 || n > 50) return 0;

	int result = seq(n);

	printf("%d\n", result);

	return 0;
}

int seq(int n)
{
	int result = 0;

	for (int i = 1; i <= n; i++) result += i;

	if (n > 0) result += seq(n - 1);

	return result;
}