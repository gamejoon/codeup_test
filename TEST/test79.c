#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;

	do
	{
		scanf(" %c", &ch);
		printf("%c\n", ch);
	} while (ch != 'q');

	return 0;
}