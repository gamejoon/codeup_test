#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[101];
	int C_cnt = 0, CC_cnt = 0;

	if (scanf("%s", str) != 1) return 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')) return 0;
		if (str[i] == 'C' || str[i] == 'c')
		{
			C_cnt++;
			if (str[i + 1] == 'C' || str[i] == 'c') CC_cnt++;
		}
	}

	printf("%d\n%d\n", C_cnt, CC_cnt);

	return 0;
}