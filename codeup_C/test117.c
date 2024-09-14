#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num1, num2;

	if (scanf("%f %f", &num1, &num2) != 2) return 0;

	printf("%.2f\n", num1 * num2);

	return 0;
}