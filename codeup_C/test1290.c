#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, cnt = 0;

	if (scanf("%d", &n) != 1 || n < 1) return 0;

	for (int i = 1; i < n; i++) if (n % i == 0) cnt++;

	printf("%d\n", cnt);

	return 0;
}