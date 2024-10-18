#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, tmp;

	if (scanf("%d", &N) != 1 || N < 3 || N > 50) return 0;

	int* num = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) num[i] = 0;

	for (int i = 0; i < N - 1; i++)
	{
		if (scanf("%d", &tmp) != 1 || num[tmp - 1] != 0) return 0;
		num[tmp - 1]++;
	}

	for (int i = 0; i < N; i++) if (num[i] == 0) printf("%d\n", i + 1);

	free(num);

	return 0;
}