#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2 || a < 1 || b < 1 || a > 10 || b > 10) return 0;

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			printf("%d %d\n", i, j);
		}
	}

	return 0;
}