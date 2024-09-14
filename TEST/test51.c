#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
	int num1, num2, result;
	if (scanf("%d %d", &num1, &num2) != 2 || num1 < INT_MIN || num1 > INT_MAX || num2 < INT_MIN || num2 > INT_MAX) return 0;
	if (num1 <= num2) result = 1;
	else result = 0;
	printf("%d\n", result);
	return 0;
}