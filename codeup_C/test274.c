#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1 || num < 2) return 0;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("not prime\n");
			return 0;
		}
	}

	printf("prime\n");

	return 0;
}