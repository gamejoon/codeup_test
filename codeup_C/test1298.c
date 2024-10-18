#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
	long long A, B, C, x, y;

	if (scanf("%lld %lld %lld", &A, &B, &C) != 3 || A < -1000000000 || A > 1000000000 || B < -1000000000 || B > 1000000000 || C < -1000000000 || C > 1000000000) return 0;

	for (x = 0; x < LLONG_MAX; x++)
	{
		if ((A * x - C) % B == 0)
		{
			y = (A * x - C) / -B;
			printf("%lld %lld\n", x, y);
			return 0;
		}
	}

	for (x = 0; x > LLONG_MIN; x--)
	{
		if ((A * x - C) % B == 0)
		{
			y = (A * x - C) / -B;
			printf("%lld %lld\n", x, y);
			return 0;
		}
	}

	printf("Not Exist\n");

	return 0;
}