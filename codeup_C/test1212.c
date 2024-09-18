#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int beeline[3];

	for (int i = 0; i < 3; i++) if (scanf("%d", &beeline[i]) != 1 || beeline[i] < 1) return 0;

	for (int i = 0; i < 2; i++)
	{
		if (beeline[i] > beeline[i + 1])
		{
			int temp = beeline[i];
			beeline[i] = beeline[i + 1];
			beeline[i + 1] = temp;
		}
	}

	printf("%s\n", beeline[0] + beeline[1] > beeline[2] ? "yes" : "no");

	return 0;
}