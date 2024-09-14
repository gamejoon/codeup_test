#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int location;

	if (scanf("%d", &location) != 1) return 0;

	printf("%s\n", (location >= 30 && location <= 40) || (location >= 60 && location <= 70) ? "win" : "lose");

	return 0;
}