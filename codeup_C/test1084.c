#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int r, g, b, count = 0;

	if (scanf("%d %d %d", &r, &g, &b) != 3 || r < 0 || g < 0 || b < 0) return 0;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < g; j++)
		{
			for (int k = 0; k < b; k++)
			{
				printf("%d %d %d\n", i, j, k);
				count++;
			}
		}
	}

	printf("%d\n", count);

	return 0;
}