#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height[10];

	for (int i = 0; i < 10; i++) if (scanf("%d", &height[i]) != 1 || height[i] <= 0) return 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 9; j > i; j--)
		{
			if (height[j] > height[j - 1])
			{
				int tmp = height[j];
				height[j] = height[j - 1];
				height[j - 1] = tmp;
			}
		}
	}

	printf("%d\n", height[2]);

	return 0;
}