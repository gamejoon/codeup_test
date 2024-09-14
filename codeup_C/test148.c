#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, x;

	if (scanf("%d %d", &a, &x) != 2 || a < 1 || a > 100000 || x < 1 || x > 10) return 0;

	printf("%d\n", a >> x);

	return 0;
}