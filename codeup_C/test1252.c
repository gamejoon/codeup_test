#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 100000) return 0;

	for (int i = 1; i <= n; i++) printf("%d ", i);

	return 0;
}