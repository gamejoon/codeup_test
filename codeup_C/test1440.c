#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 2 || n > 1000) return 0;

	int* num = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) if (scanf("%d", &num[i]) != 1) return 0;

	for (int i = 0; i < n; i++)
	{
		printf("%d: ", i + 1);

		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;
			printf("%c ", num[i] > num[j] ? '>' : num[i] < num[j] ? '<' : '=');
		}

		printf("\n");
	}

	free(num);

	return 0;
}