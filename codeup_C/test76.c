#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*char c;
	int n = 0;

	if (scanf("%c", &c) != 1 || c < 'a' || c > 'z') return 0;

	do
	{
		printf("%c ", 'a' + n);
		n++;
	} while ('a' + n <= c);*/

	char c;

	if (scanf("%c", &c) != 1 || c < 'a' || c > 'z') return 0;

	for (char i = 'a'; i <= c; i++) printf("%c ", i);

	return 0;
}