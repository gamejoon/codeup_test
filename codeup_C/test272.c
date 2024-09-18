#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int money(int);

int main()
{
	int k, h;

	if (scanf("%d %d", &k, &h) != 2 || k < 1 || h < 1) return 0;

	int sum = money(k) + money(h);

	printf("%d\n", sum);

	return 0;
}

int money(int num)
{
	if (num % 2 == 1) return num / 2 + 1;
	else return num * 5;
}