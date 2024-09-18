#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int);

int main()
{
	int n, r;

	if (scanf("%d %d", &n, &r) != 2 || r < 1 || r > n || n > 12) return 0;

	printf("%d\n", factorial(n) / (factorial(r) * factorial(n - r)));

	return 0;
}

int factorial(int num)
{
	int result = 1;
	
	for (int i = 1; i <= num; i++) result *= i;

	return result;
}