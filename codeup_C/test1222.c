#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, score1, score2;

	if (scanf("%d %d %d", &time, &score1, &score2) != 3 || time < 0 || time > 89 || score1 < 0 || score2 < 0) return 0;

	score1 += (89 - time) / 5 + 1;

	printf("%s\n", score1 > score2 ? "win" : score1 < score2 ? "lose" : "same");

	return 0;
}