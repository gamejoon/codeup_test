#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[21];
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) printf("\'%c\'\n", str[i]);
	return 0;
}