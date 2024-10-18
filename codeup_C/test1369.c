#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, k, cnt;

	if (scanf("%d %d", &n, &k) != 2 || n < 1 || n > 99 || k > n - 2) return 0;

	for (int i = 0; i < n; i++) printf("*");
	printf("\n");

	for (int i = 0; i < n - 2; i++)
	{
		cnt = i % k;

		printf("*");
		for (int j = 0; j < n - 2; j++)
		{
			if (cnt == 0) printf("*");
			else printf(" ");
			cnt = ++cnt % k;
		}
		printf("*\n");
	}

	for (int i = 0; i < n; i++) printf("*");
	printf("\n");

	return 0;
}