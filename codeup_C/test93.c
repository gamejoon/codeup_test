#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cnt, tmp, num[23] = {0};

	if (scanf("%d", &cnt) != 1 || cnt < 0 || cnt > 10000) return 0;

	for (int i = 0; i < cnt; i++)
	{
		if (scanf("%d", &tmp) != 1 || tmp < 1 || tmp > 23) return 0;
		num[tmp - 1]++;
	}

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) printf("%d ", num[i]);

	return 0;
}