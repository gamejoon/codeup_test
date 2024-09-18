#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cnt, num[10000];

	if (scanf("%d", &cnt) != 1 || cnt < 0 || cnt > 10000) return 0;

	for (int i = 0; i < cnt; i++) if (scanf("%d", &num[i]) != 1 || num[i] < 0 || num[i] > 23) return 0;

	for (int i = cnt - 1; i >= 0; i--) printf("%d ", num[i]);

	return 0;
}