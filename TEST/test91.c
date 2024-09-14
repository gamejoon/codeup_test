#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, m, d, n, result;

	if (scanf("%d %d %d %d", &a, &m, &d, &n) != 4 || a < -50 || a > 50 || m < -50 || m > 50 || d < -50 || d > 50 || n < 1 || n > 10) return 0;

	for (int i = 1; i < n; i++) a = a * -2 + d;

	printf("%d\n", a);

	return 0;
}