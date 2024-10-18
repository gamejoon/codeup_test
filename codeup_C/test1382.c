#include <stdio.h>

int main()
{
	for (int i = 1; i <= 9; i++) for (int j = 2; j <= 5; j++) printf("%d x %d = %2d%c", j, i, j * i, j == 5 ? '\n' : '\t');

	return 0;
}