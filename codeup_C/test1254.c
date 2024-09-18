#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a, b;

	if (scanf("%c %c", &a, &b) != 2 || a < 'a' || a > b || b > 'z') return 0;

	for (char i = a; i <= b; i++) printf("%c ", i);

	return 0;
}