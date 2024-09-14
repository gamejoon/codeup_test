#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printbinary(long long);

int main()
{
	long long a, b;

	if (scanf("%lld %lld", &a, &b) != 2 || 0x8000000000000000 > a + b || a + b > 0x7fffffffffffffff)
	{
		if (0x8000000000000000 > a + b) printf("%lld\n", 0x8000000000000000);
		if (0x7fffffffffffffff < a + b) printf("a + b > 0x7fffffffffffffff\n");
		printf("%lld\n", a + b);
		printf("%d\n", sizeof(long long int));
		return 0;
	}
	printf("%lld", a + b);

	return 0;
}