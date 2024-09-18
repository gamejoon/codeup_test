#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;

	if (scanf("%d %d %d", &num1, &num2, &num3) != 3) return 0;

	printf("%.2f\n", (float)(num1 + num2 + num3) / 3);

	return 0;
}