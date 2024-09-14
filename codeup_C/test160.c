#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int week;

	if (scanf("%d", &week) != 1 || week < 1 || week > 7) return 0;

	printf("%s\n", week % 2 == 1 ? "oh my god" : "enjoy");

	return 0;
}