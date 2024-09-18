#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, sum = 0;

	if (scanf("%d", &num) != 1 || num < 0 || num > 100) return 0;

	for (int i = 0; i <= num; i += 2) sum += i;

	printf("%d\n", sum);

	return 0;
}