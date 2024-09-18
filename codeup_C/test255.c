#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b;

	if (scanf("%lf %lf", &a, &b) != 2 || a > b) return 0;

	for (double i = a; i <= b; i += 0.01) printf("%.2lf ", i);

	return 0;
}