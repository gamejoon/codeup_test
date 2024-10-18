#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long factorial(int);

int main()
{
	int n, m, k, p;

	if (scanf("%d %d %d %d", &n, &m, &k, &p) != 4 || n < -1200 || n > 1200 || m < -1200 || m > 1200 || (k != 0 && k != 1) || p < 0 || p > 6000000) return 0;

	if ((n == 0 && m == 0) || ((n == 1 || n == -1) && (m == 1 || m == -1)))
	{
		int result = 8;

		printf("%d %d", 4, result % p);
	}
	else if (n == 0)
	{
		if (m < 0) m *= -1;

		int result = 2 * m;

		printf("%d %d", m + 2, result % p);
	}
	else if (m == 0)
	{
		if (n < 0) n *= -1;

		int result = 2 * n;

		printf("%d %d", n + 2, result % p);
	}
	else if ((n == 0 && (m == 1 || m == -1)) || (m == 0 && (n == 1 || n == -1))) printf("%d %d\n", 2, 2 % p);
	else
	{
		if (n < 0) n *= -1;
		if (m < 0) m *= -1;

		long long result = factorial(n + m) / factorial(n) / factorial(m);

		if (k == 1)
		{
			if (m == n) result -= 2;
			else if (m - n == -1 || m - n == 1) result -= 1;
		}

		result -= 2;

		printf("%d %lld\n", m + n, result % p);
	}

	return 0;
}

long long factorial(int n)
{
	long long result = 1;

	for (int i = 1; i <= n; i++) result *= i;
	return result;
}