#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, num, max = NULL;
	
	if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 0;
	for (int i = 0; i < n; i++)
	{
		if (scanf("%d", &num) != 1 || num < 0 || n > 1000000) return 0;
		if (max == NULL || max < num) max = num;
	}

	printf("%d\n", max);

	return 0;
}