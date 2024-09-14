#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, score;

	if (scanf("%d %d", &time, &score) != 2 || time < 0 || time > 90 || score < 0) return 0;

	score += (89 - time) / 5 + 1;

	printf("%d\n", score);

	return 0;
}