#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];

	if (scanf("%[^\n]s", str) != 1) return 0;
	
	for (int i = 0; i < strlen(str); i++) if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && str[i] != ' ') return 0;

	for (int i = strlen(str) - 1; i >= 0; i--) printf("%c", str[i]);

	return 0;
}