#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int w, h, b;
	float bit, byte, KB, MB;

	if (scanf("%d %d %d", &w, &h, &b) != 3 || w < 0 || w > 1024 || h < 0 || h > 1024 || b < 0 || b > 40 || b % 4 != 0) return 0;

	bit = w * h * b;
	byte = bit / 8;
	KB = byte / 1024;
	MB = KB / 1024;

	printf("%.2f MB\n", MB);

	return 0;
}