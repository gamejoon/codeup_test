#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;
	if (scanf("%d %d", &num1, &num2) != 2 || num1 < 0 || num2 > 2147483647) return 0;
	printf("%d\n%d\n%d\n%d\n%d\n%f\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2, (float)num1 / (float)num2);
	return 0;
}