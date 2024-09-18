#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, max = NULL, min = NULL;

	for (int i = 0; i < 5; i++)
	{
		if (scanf("%d", &num) != 1 || num < -1000000 || num > 1000000) return 0;
		if (max == NULL) max = num;
		else if (num > max) max = num;
		if (min == NULL) min = num;
		else if (num < min) min = num;
	}

	printf("%d\n%d\n", max, min);

	return 0;
}