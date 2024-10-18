#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int love_cnt = 0;

	if (scanf("%[^\n]s", str) != 1) return 0;

	for (char* ptr = str; ptr != NULL ;)
	{
		ptr = strstr(ptr, "love");
		if (ptr != NULL)
		{
			love_cnt++;
			ptr += 4;
		}
	}

	printf("%d\n", love_cnt);

	return 0;
}