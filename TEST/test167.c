#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[3], temp;

	for (int i = 0; i < 3; i++) if (scanf("%d", &num[i]) != 1) return 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	printf("%d\n", num[1]);

	return 0;
}