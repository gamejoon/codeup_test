#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define DIFF 'a' - 'A'

int main()
{
	char str[1001];

	if (scanf("%s", str) != 1) return 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z') str[i] -= DIFF;
		else if (str[i] >= 'A' && str[i] <= 'Z') str[i] += DIFF;
	}

	printf("%s\n", str);

	return 0;
}