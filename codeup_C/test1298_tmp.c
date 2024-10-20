#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int, int);

int main()
{
	int a, b;
	if (scanf("%d %d", &a, &b) != 2) return 0;

	int result = gcd(a, b);

	printf("%d\n", result);

	return 0;
}

int gcd(int a, int b)
{
	printf("a = %d, b = %d\n", a, b);
	if (b == 0) return a;
	return gcd(b, a % b);
}