#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height[3] = {0};

	for (int i = 0; i < 3; i++) if (scanf(" %d", &height[i]) != 1 || height[i] < 1) return 0;
	
	for (int i = 0; i < 3; i++)
	{
		if (height[i] <= 170)
		{
			printf("CRASH\n");
			return 0;
		}
	}
	printf("PASS\n");

	return 0;
}