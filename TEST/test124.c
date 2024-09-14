#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int C, H;

	if (scanf("C%dH%d", &C, &H) != 2 || C < 0 || H < 0) return 0;

	printf("%d\n", C * 12 + H * 1);

	return 0; 
}