#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2) return 0;

	if (a != b) printf("%d\n", 1);
	else printf("%d\n", 0);

	return 0;
}