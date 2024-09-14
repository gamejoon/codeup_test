#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int celsius;

	if (scanf("%d", &celsius) != 1) return 0;

	printf("%.3f\n", (float)celsius * 9 / 5 + 32);

	return 0;
}