#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1) return 0;

	printf("%s\n", num > 0 ? "양수" : num < 0 ? "음수" : "0");

	return 0;
}