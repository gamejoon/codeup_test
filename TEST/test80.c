#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, i = 0;

	if (scanf("%d", &num) != 1 || num < 0 || num > 100) return 0;

	for (int sum = 0; sum + i + 1 <= num;) sum += ++i;

	printf("%d\n", i);

	return 0; 
}