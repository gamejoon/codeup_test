#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2) return 0;

	if (b >= a) for (int i = a; i <= b; i++) printf("%d ", i);
	else for (int i = b; i <= a; i++) printf("%d ", i);

	return 0;
}