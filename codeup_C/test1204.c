#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	if (scanf("%d", &num) != 1 || num < 1 || num > 99) return 0;

	if (num % 10 == 1 && num / 10 != 1) printf("%dst\n", num);
	else if (num % 10 == 2 && num / 10 != 1) printf("%dnd\n", num);
	else if (num % 10 == 3 && num / 10 != 1) printf("%drd\n", num);
	else printf("%dth\n", num);

	return 0;
}