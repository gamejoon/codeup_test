#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, r, n;

	if (scanf("%d %d %d", &a, &r, &n) != 3 || a < 0 || a > 10 || r < 0 || r > 10 || n < 0 || n > 10) return 0;

	printf("%d\n", a * (int)pow(r, (n - 1)));

	return 0;
}