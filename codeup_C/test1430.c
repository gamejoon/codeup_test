#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int M, N, num;

	if (scanf("%d", &N) != 1 || N < 1 || N > 10000000) return 0;

	int* option = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) if (scanf("%d", &option[i]) != 1 || option[i] < 1 || option[i] > 10000000) return 0;

	if (scanf("%d", &M) != 1 || M < 1 || M > 100000) return 0;

	for (int i = 0; i < M; i++)
	{
		if (scanf("%d", &num) != 1 || num < 1 || num > 10000000) return 0;
		
		int cnt = 0;
		for (int j = 0; j < N; j++)
		{
			if (option[j] == num)
			{
				printf("%d ", 1);
				cnt++;
			}
		}

		if (cnt == 0) printf("%d ", 0);
	}

	free(option);

	return 0;
}