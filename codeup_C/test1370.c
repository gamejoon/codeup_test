#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, r;

	if (scanf("%d %d", &h, &r) != 2 || h < 1 || r < 0 || r > 40) return 0;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < h; j++)
		{
			for (int k = 0; k < j; k++) printf(" ");
			printf("*\n");
		}

		for (int j = h - 1; j > 0; j--)
		{
			for (int k = 0; k < j - 1; k++) printf(" ");
			printf("*\n");
		}
	}

	return 0;
}