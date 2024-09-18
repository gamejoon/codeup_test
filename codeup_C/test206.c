#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2 || a < 1 || b < 1) return 0;

	if (a % b == 0) printf("%d*%d=%d\n", b, a / b, a);
	else if (b % a == 0) printf("%d*%d=%d\n", a, b / a, b);
	else printf("none\n");

	return 0;
}