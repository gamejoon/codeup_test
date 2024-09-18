#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int k;

	if (scanf("%d", &k) != 1 || k < 0) return 0;

	for (int i = 0; i < k; i++)
	{
		if (pow(k - i, 0.5) == (int)pow(k - i, 0.5))
		{
			printf("%d %d\n", i, (int)pow(k - i, 0.5));
			break;
		}
	}

	return 0;
}