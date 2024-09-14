#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	if (scanf("%d %d", &num1, &num2) != 2) return 0;

	printf("%s+%s=%s\n", num1 % 2 == 0 ? "Â¦¼ö" : "È¦¼ö", num2 % 2 == 0 ? "Â¦¼ö" : "È¦¼ö", num1 % 2 == num2 % 2 ? "Â¦¼ö" : "È¦¼ö");

	return 0;
}