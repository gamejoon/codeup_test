#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, odd = -1, even = -1;

	for (int i = 0; i < 10; i++)
	{
		if (scanf("%d", &num) != 1 || num < 1) return 0;

		if (num % 2 == 1 && num > odd) odd = num;
		else if (num % 2 == 0 && num > even) even = num;
	}

	if (odd != -1) printf("%d ", odd);
	if (even != -1) printf("%d\n", even);

	return 0;
}