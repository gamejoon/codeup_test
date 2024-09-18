#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d;

	if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4 || a < 1 || b < 1 || c < 1 || d < 1) return 0;

	printf("%c\n", (float)a / b > (float)c / d ? '>' : (float)a / b < (float)c / d ? '<' : '=');

	return 0;
}