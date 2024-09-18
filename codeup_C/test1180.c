#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int trash;

	if (scanf("%d", &trash) != 1 || trash < 1 || trash > 99) return 0;

	trash = (trash % 10 * 10 + trash / 10) * 2 % 100;

	printf("%d\n%s\n", trash, trash <= 50 ? "GOOD" : "OH MY GOD");

	return 0;
}