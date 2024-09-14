#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1 || num < 0 || num > 100) return 0;

	for (int i = 1; i <= num; i++) if (i % 3 != 0) printf("%d ", i);

	return 0;
}