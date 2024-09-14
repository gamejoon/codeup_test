#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	if (scanf("%d %d", &num1, &num2) != 2 || (num1 != 0 && num1 != 1) || (num2 != 0 && num2 != 1)) return 0;

	if (num1 || num2) printf("%d\n", 1);
	else printf("%d\n", 0);

	return 0;
}