#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[91], alphabet[26];

	for (int i = 0; i < 26; i++) alphabet[i] = 0;

	if (scanf("%[^\n]s", str) != 1) return 0;

	for (int i = 0; i < strlen(str); i++) if ((str[i] < 'a' || str[i] > 'z') && (str[i] < ' ' || str[i] > '/') && (str[i] < '[' || str[i] > '\'')) return 0;

	for (int i = 0; str[i] != '\0'; i++) if (str[i] >= 'a' && str[i] <= 'z') alphabet[str[i] - 'a']++;

	for (int i = 0; i < 26; i++) printf("%c:%d\n", 'a' + i, alphabet[i]);

	return 0;
}