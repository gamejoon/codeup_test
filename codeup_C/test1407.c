#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[101];

	if (scanf("%[^\n]s", str) != 1) return 0;
	
	for (int i = 0; str[i] != '\0'; i++) if (str[i] != ' ') printf("%c", str[i]);

	return 0;
}