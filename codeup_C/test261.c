#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[10];

	for (int i = 0; i < 10; i++) if (scanf("%d", &num[i]) != 1 || num < 1) return 0;

	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 5 == 0)
		{
			printf("%d\n", num[i]);
			return 0;
		}
	}

	printf("%d\n", 0);

	return 0;
}