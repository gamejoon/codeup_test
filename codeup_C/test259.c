#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, sum = 0;

	if (scanf("%d", &n) != 1 || n < 1) return 0;

	for (int i = 2; i <= n; i += 2) sum += i;

	printf("%d\n", sum);

	return 0;
}