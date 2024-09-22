#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[201];

	if (scanf("%[^\n]s", str) != 1) return 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] >= 'A' && str[i] <= 'Z') str[i] = (str[i] - 'A' + 3) % 26 + 'A';
		else if (str[i] != ' ' && str[i] >= 'a' && str[i] <= 'z') str[i] = (str[i] - 'a' + 3) % 26 + 'a';
	}

	printf("%s\n", str);

	return 0;
}