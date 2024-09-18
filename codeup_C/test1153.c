#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2) return 0;

	printf("%c\n", a > b ? '>' : (a < b ? '<' : '='));

	return 0;
}