#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, result = 1;

	if (scanf("%d", &n) != 1 || n < 1 || n > 12) return 0;

	for (int i = 1; i <= n; i++) result *= i;

	printf("%d\n", result);

	return 0;
}