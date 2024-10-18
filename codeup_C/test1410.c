#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100001];

	if (scanf("%s", str) != 1) return 0;
	
	int open_par = 0, close_par = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '(') open_par++;
		else if (str[i] == ')') close_par++;
		else return 0;
	}

	printf("%d %d\n", open_par, close_par);

	return 0;
}