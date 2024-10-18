#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, first = -1, last = -1, score;

	if (scanf("%d", &n) != 1 || n < 2 || n > 100) return 0;
	for (int i = 0; i < n; i++)
	{
		if (scanf("%d", &score) != 1 || score < 0 || score > 100) return 0;
		
		if (first == -1) first = score;
		else if (last == -1 && first >= score) last = score;
		else if (last == -1 && first < score)
		{
			last = first;
			first = score;
		}
		else if (first < score) first = score;
		else if (last > score) last = score;
	}

	printf("%d %d\n", first, last);

	return 0;
}