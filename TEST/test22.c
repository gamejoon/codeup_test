#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[51];

	scanf("%[^\n]s", str);

	printf("%s\n", str);

	return 0;
}