#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int day;

	if (scanf("%d", &day) != 1 || day < 1) return 0;

	printf("%d\n", day * 24);

	return 0;
}