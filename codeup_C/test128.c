#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 0;

	printf("%lld\n", n * 123456789LL);

	return 0;
}