#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;

	if (scanf("%d %d %d", &a, &b, &c) != 3 || a < 1 || b < 1 || c < 1) return 0;

	if (a <= 170)
	{
		printf("CRASH %d\n", a);
		return 0;
	}
	else if (b <= 170)
	{
		printf("CRASH %d\n", b);
		return 0;
	}
	else if (c <= 170)
	{
		printf("CRASH %d\n", c);
		return 0;
	}

	printf("PASS\n");

	return 0;
}