#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2 || a > b) return 0;

	for (int i = a; i <= b; i++) if (i % 2 == 1) printf("%d ", i);

	return 0;
}