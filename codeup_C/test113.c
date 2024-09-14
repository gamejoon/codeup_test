#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	if (scanf("%d %d", &num1, &num2) != 2) return 0;

	printf("%d %d", num2, num1);

	return 0;
}