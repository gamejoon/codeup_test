#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, first, middle, last, num;

	if (scanf("%d", &N) != 1 || N < 1 || N % 2 == 0) return 0;
	for (int cnt = 1; cnt <= N; cnt++)
	{
		if (scanf("%d", &num) != 1) return 0;
		if (cnt == 1) first = num;
		else if (cnt == N / 2 + 1) middle = num;
		else if (cnt == N) last = num;
	}

	printf("%d %d %d\n", first, middle, last);

	return 0;
}