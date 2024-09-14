#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	char rate;
	if (scanf("%d", &score) != 1 || score < 0 || score > 100) return 0;
	if (score >= 90) rate = 'A';
	else if (score >= 70 && score < 90) rate = 'B';
	else if (score >= 40 && score < 70) rate = 'C';
	else if (score < 40) rate = 'D';
	printf("%c\n", rate);
	return 0;
}