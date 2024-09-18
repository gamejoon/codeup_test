#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;
	char sign;

	if (scanf("%d%c%d", &num1, &sign, &num2) != 3 || (sign != '+' && sign != '-' && sign != '*' && sign != '/')) return 0;

	switch (sign)
	{
	case '+':
		printf("%d\n", num1 + num2);
		break;

	case '-':
		printf("%d\n", num1 - num2);
		break;

	case '*':
		printf("%d\n", num1 * num2);
		break;

	default:
		if (num2 != 0) printf("%.2f\n", (float)num1 / num2);
	}

	return 0;
}