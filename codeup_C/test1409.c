#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[10];
	for (int i = 0; i < 10; i++) if (scanf("%d", &num[i]) != 1) return 0;

	int n;
	if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 0;

	printf("%d\n", num[n - 1]);

	return 0;
}