#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;

	if (scanf("%c", &c) != 1 || c < 'A' || c > 'F') return 0;

	int num = c - 'A' + 10;

	for (int i = 1; i <= 0xF; i++) printf("%X*%X=%X\n", num, i, num * i);

	return 0;
}