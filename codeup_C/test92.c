#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, day = 1;

	if (scanf("%d %d %d", &a, &b, &c) != 3 || a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100) return 0;

	while (day % a != 0 || day % b != 0 || day % c != 0) day++;

	printf("%d\n", day);

	return 0;
}