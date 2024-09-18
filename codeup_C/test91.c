#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, m, d, n;

	if (scanf("%d %d %d %d", &a, &m, &d, &n) != 4 || a < -50 || a > 50 || m < -50 || m > 50 || d < -50 || d > 50 || n < 1 || n > 10) return 0;

	long long result = a;

	for (int i = 1; i < n; i++) result = result * m + d;

	printf("%lld\n", result);

	return 0;
}