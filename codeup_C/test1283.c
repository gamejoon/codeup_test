#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, change_rate;

	//if (scanf("%d", &a) != 1 || a < 100 || a > 10000) return 0;
	scanf("%d", &a);
	if (scanf("%d", &b) != 1 || b < 1 || b > 10) return 0;

	float result = a;
	
	for (int i = 0; i < b; i++)
	{
		if (scanf("%d", &change_rate) != 1 || change_rate < -100 || change_rate > 100) return 0;
		result *= (float)(100 + change_rate) / 100;
	}

	printf("%.0f\n", result - a);
	printf("%s\n", result > a ? "good" : result < a ? "bad" : "same");

	return 0;
}