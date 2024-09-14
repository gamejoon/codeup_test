#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char birthday[7];
	int sex;

	if (scanf("%s %d", birthday, &sex) != 2 || sex < 1 || sex > 4) return 0;
	for (int i = 0; i < 6; i++) if (birthday[i] < '0' || birthday[i] > '9') return 0;

	printf("%d\n", sex <= 2 ? 2012 - (1900 + (birthday[0] - '0') * 10 + (birthday[1] - '0')) + 1 : 2012 - (2000 + (birthday[0] - '0') * 10 + (birthday[1] - '0')) + 1);

	return 0;
}