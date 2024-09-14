#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int location;

	if (scanf("%d", &location) != 1) return 0;

	printf("%s\n", (location >= 50 && location <= 70) || (location % 6 == 0) ? "win" : "lose");

	return 0;
}