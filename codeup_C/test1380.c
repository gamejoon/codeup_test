#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 2 || n > 12) return 0;

	for (int i = 1; i <= 6; i++) if (n - i >= 1 && n - i <= 6) printf("%d %d\n", i, n - i);

	return 0;
}