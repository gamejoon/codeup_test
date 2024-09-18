#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;

	if (scanf("%c", &c) != 1 || c < 'a' || c > 'z') return 0;

	for (char i = 'a'; i <= c; i++) printf("%c ", i);

	return 0;
}