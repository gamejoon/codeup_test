#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double stature, weight, obesity;

	if (scanf("%lf %lf", &stature, &weight) != 2 || stature < 0 || weight < 0) return 0;

	obesity = (weight - (stature - 100) * 0.9) * 100 / ((stature - 100) * 0.9);

	printf("%s\n", obesity <= 10 ? "정상" : obesity > 10 && obesity <= 20 ? "과체중" : "비만");

	return 0;
}