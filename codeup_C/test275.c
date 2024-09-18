#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n, k;
	
	if (scanf("%d %d", &n, &k) != 2 || n == 0 || k < 0) return 0;

	printf("%d\n", (int)pow(n, k));

	return 0;
}