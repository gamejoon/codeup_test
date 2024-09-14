#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2) return 0;

	printf("%.1f\n", a * b * 0.5);

	return 0;
}