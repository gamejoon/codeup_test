#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d\n%.1f\n", num1 + num2 + num3, (float)(num1 + num2 + num3) / 3);
	return 0;
}