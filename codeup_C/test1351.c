#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	if (scanf("%d %d", &num1, &num2) != 2 || num1 < 1 || num2 < 1 || num1 > 9 || num2 > 9|| num1 > num2) return 0;

	for (int i = num1; i <= num2; i++) for (int j = 1; j <= 9; j++) printf("%d*%d=%d\n", i, j, i * j);

	return 0;
}