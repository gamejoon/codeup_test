#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	if (num1 > num2) result = 1;
	else result = 0;
	printf("%d\n", result);
	return 0;
}