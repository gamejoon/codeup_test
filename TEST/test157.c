#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float location;

	if (scanf("%f", &location) != 1) return 0;

	printf("%s\n", (location >= 50 && location <= 60) ? "win" : "lose");

	return 0;
}