#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, first = NULL, last = NULL, score;

	if (scanf("%d", &n) != 1 || n < 2 || n > 100) return 0;
	for (int i = 0; i < n; i++)
	{
		if (scanf("%d", &score) != 1 || score < 0 || score > 100) return 0;
		
		if (first == NULL) first = score;
		else if (last == NULL && first >= score) last = score;
		else if (last == NULL && first < score)
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