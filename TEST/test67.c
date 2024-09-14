#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	if (scanf("%d", &num) != 1 || num == 0) return 0;
	if (num > 0)
	{
		if (num % 2 == 0) printf("plus\neven\n");
		else printf("plus\nodd\n");
	}
	else if (num < 0)
	{
		if (num % 2 == 0) printf("minus\neven\n");
		else printf("minus\nodd\n");
	}
	return 0;
}