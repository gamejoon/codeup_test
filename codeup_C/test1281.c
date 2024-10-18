#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, sum = 0;

	if (scanf("%d %d", &a, &b) != 2 || a < 1 || b < 1 || a > b) return 0;

	for (int i = a; i <= b; i++)
	{
		if (i != a || i % 2 == 0) printf("%c", i % 2 == 1 ? '+' : '-');
		printf("%d", i);
		sum += i % 2 == 1 ? i : i * -1;
	}

	printf("=%d\n", sum);

	return 0;
}