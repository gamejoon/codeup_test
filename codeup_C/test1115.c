#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long a, b;

	//if (scanf("%lld %lld", &a, &b) != 2 || 0x8000000000000000 > a + b || a + b > 0x7fffffffffffffff) return 0;
	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);

	return 0;
}