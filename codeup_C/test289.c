#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, max = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (scanf("%d %d", &x, &y) != 2 || x < 1 || x > 1000 || y < 1 || y > 1000) return 0;

		if (max == NULL) max = x * y;
		else if (max < x * y) max = x * y;
	}

	printf("%d\n", max);

	return 0;
}