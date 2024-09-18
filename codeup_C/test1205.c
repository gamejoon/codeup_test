#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
	double a, b, max;

	if (scanf("%lf %lf", &a, &b) != 2 || a < INT_MIN || a > INT_MAX || b < INT_MIN || b > INT_MAX) return 0;

	max = a + b;
	if (a - b > max) max = a - b;
	if (b - a > max) max = b - a;
	if (a * b > max) max = a * b;
	if (b != 0 && a / b > max) max = a / b;
	if (a != 0 && b / a > max) max = b / a;
	if (a != 0 && pow(a, b) > max) max = pow(a, b);
	if (b != 0 && pow(b, a) > max) max = pow(b, a);

	printf("%.6lf\n", max);

	return 0;
}