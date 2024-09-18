#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 10000) return 0;

	for (int i = 1; i <= n; i++) if (n % i == 0) printf("%d ", i);

	return 0;
}