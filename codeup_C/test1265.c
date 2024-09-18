#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 9) return 0;

	for (int i = 1; i <= 9; i++) printf("%d*%d=%d\n", n, i, n * i);

	return 0;
}