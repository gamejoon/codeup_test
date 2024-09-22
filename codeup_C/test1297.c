#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, extent = NULL, max_i;

	if (scanf("%d", &n) != 1 || n < 1) return 0;

	for (int i = 1; i < n / 2; i++)
	{
		if (extent == NULL)
		{
			extent = (n - 2 * i) * i;
			max_i = i;
		}
		else if (extent < (n - 2 * i) * i)
		{
			extent = (n - 2 * i) * i;
			max_i = i;
		}
	}

	printf("%d\n", max_i);

	return 0;
}