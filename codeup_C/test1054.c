#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, result;
	if (scanf("%d %d", &num1, &num2) != 2 || (num1 != 0 && num1 != 1 && num2 != 0 && num2 != 1)) return 0;
	if (num1 == 1 && num2 == 1) result = 1;
	else result = 0;
	printf("%d\n", result);
	return 0;
}