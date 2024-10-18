#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
	int A, B, C, x, y;

	if (scanf("%d %d %d", &A, &B, &C) != 3 || A < -1000 || A > 1000 || B < -1000 || B > 1000 || C < -1000 || C > 1000) return 0;

	for (x = 0; x < INT_MAX; x++)
	{
		if ((A * x - C) % B == 0)
		{
			y = (A * x - C) / -B;
			printf("%d %d\n", x, y);
			return 0;
		}
	}

	for (x = 0; x > INT_MIN; x--)
	{
		if ((A * x - C) % B == 0)
		{
			y = (A * x - C) / -B;
			printf("%d %d\n", x, y);
			return 0;
		}
	}

	printf("Not Exist\n");

	return 0;
}