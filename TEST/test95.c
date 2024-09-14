#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cnt, tmp, min = NULL;

	if (scanf("%d", &cnt) != 1 || cnt < 0 || cnt > 10000) return 0;

	for (int i = 0; i < cnt; i++)
	{
		if (min == NULL)
		{
			if (scanf("%d", &min) != 1 || min < 0 || min > 23) return 0;
		}
		else
		{
			if (scanf("%d", &tmp) != 1 || tmp < 0 || tmp > 23) return 0;
			if (min > tmp) min = tmp;
		}
	}

	printf("%d\n", min);

	return 0;
}