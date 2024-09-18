#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, n = 1;

	if (scanf("%d", &num) != 1 || num < 1) return 0;

	while (num / 10 >= 1)
	{
		num /= 10;
		n++;
	}

	printf("%d\n", n);

	return 0;
}