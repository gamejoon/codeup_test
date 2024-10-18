#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1 || num > 2100000000) return 0;

	int i;

	for (i = 30; i > 0; i--) if (num >= pow(2, i)) break;

	for (; i >= 0; i--)
	{
		if (num >= pow(2, i))
		{
			printf("%d", 1);
			num -= pow(2, i);
		}
		else printf("%d", 0);
	}

	return 0;
}