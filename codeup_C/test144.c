#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	if (scanf("%d %d", &num1, &num2) != 2) return 0;

	printf("%d\n", num1 | num2);

	return 0;
}