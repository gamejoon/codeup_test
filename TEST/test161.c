#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	if (scanf("%d %d", &num1, &num2) != 2) return 0;

	printf("%s+%s=%s\n", num1 % 2 == 0 ? "礎熱" : "�汝�", num2 % 2 == 0 ? "礎熱" : "�汝�", num1 % 2 == num2 % 2 ? "礎熱" : "�汝�");

	return 0;
}