#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, sum = 0;

	if (scanf("%d", &num) != 1 || num < 0 || num > 100000000) return 0;
	
	for (int i = 1; sum <= num; i++) sum += i;

	printf("%d\n", sum);

	return 0;
}