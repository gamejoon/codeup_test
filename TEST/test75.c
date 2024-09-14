#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	while (num > 0) printf("%d\n", --num);

	return 0;
}