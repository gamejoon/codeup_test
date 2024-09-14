#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int minutes, seconds;

	if (scanf("%d", &seconds) != 1 || seconds < 0) return 0;

	minutes = seconds / 60;
	seconds %= 60;

	printf("%d %d\n", minutes, seconds);

	return 0;
}