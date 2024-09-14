#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, d, n;

	if (scanf("%d %d %d", &a, &d, &n) != 3 || a > 100 || d > 100 || n < 1 || n > 100) return 0;

	printf("%d\n", a + d * (n - 1));

	return 0;
}