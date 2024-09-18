#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long num1, num2;
	if (scanf("%lld %lld", &num1, &num2) != 2 || num1 < -1073741824 || num1 > 1073741824 || num2 < -1073741824 || num2 > 1073741824) return 0;
	printf("%lld\n", num1 + num2);
	return 0;
}