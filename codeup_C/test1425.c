#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, C;

	if (scanf("%d %d", &N, &C) != 2 || N < 1 || N > 99 || C < 1 || C > 10) return 0;
	
	int* height = (int*)malloc(sizeof(int) * N);
	
	for (int i = 0; i < N; i++) if (scanf("%d", &height[i]) != 1 || height[i] < 1) return 0;

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (height[j] > height[j + 1])
			{
				int tmp = height[j];
				height[j] = height[j + 1];
				height[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) printf("%d%s", height[i], i % C == C - 1 ? " \n" : " ");

	free(height);

	return 0;
}