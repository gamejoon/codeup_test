#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, num, sum = 0;

	if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 0;
	for (int i = 0; i < n; i++)
	{
		//if (scanf("%d", &num) != 1 || num < 1 || num > 1000) return 0;
		scanf("%d", &num);
		if (num % 5 == 0) sum += num;
	}

	printf("%d\n", sum);

	return 0;
}