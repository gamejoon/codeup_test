#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, num, cnt = 0;

	if (scanf("%d", &n) != 1 || n < 1 || n > 10000) return 0;
	for (int i = 0; i < n; i++)
	{
		//if (scanf("%d", &num) != 1 || num < 1 || num > 100) return 0;
		scanf("%d", &num);
		if (num % 2 == 1) cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}