#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, n;

	if (scanf("%d %d %d %d", &a, &b, &c, &n) != 4 || a < -9 || a > 9 || b < -9 || b > 9 || c < -9 || c > 9 || n < 1 || n > 9) return 0;

	for (int i = 0; i < n - 1; i++) a = a * b + c;

	printf("%d\n", a);

	return 0;
}