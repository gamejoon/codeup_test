#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	float max = 0;

	if (scanf("%d", &n) != 1 || n < 1 || n > 100000) return 0;

	for (int i = 1; i <= n / 2; i++) if (max < ((float)n / 2 - i) * i) max = ((float)n / 2 - i) * i;
	
	printf("%d\n", (int)max);

	return 0;
}