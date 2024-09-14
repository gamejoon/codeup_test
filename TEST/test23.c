#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int integer, decimal;
	scanf("%d.%d", &integer, &decimal);
	printf("%d\n%d\n", integer, decimal);
	return 0;
}