#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prime(int);

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 100000000) return 0;

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0 && prime(i) && prime(n / i))
		{
			printf("%d %d\n", i, n / i);
			return 0;
		}
	}

	printf("wrong number\n");

	return 0;
}

int prime(int num)
{
	for (int i = 2; i < num; i++) if (num % i == 0) return 0;
	return 1;
}