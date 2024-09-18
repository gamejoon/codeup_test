#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double h, w, stdw, obesity;

	if (scanf("%lf %lf", &h, &w) != 2 || h < 1 || h > 200 || w < 1 || w > 100) return 0;

	stdw = h < 150 ? h - 100 : h >= 150 && h < 160 ? (h - 150) / 2 + 50 : (h - 100) * 0.9;
	obesity = (w - stdw) * 100 / stdw;

	printf("%s\n", obesity <= 10 ? "정상" : obesity > 10 && obesity <= 20 ? "과체중" : "비만");

	return 0;
}