#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, b, c, s;
	float bit, byte, KB, MB;

	if (scanf("%d %d %d %d", &h, &b, &c, &s) != 4 || h < 0 || h > 48000 || b < 0 || b > 32 || b % 8 != 0 || c < 0 || c > 5 || s < 0 || s > 6000) return 0;

	bit = h * b * c * s;
	byte = bit / 8;
	KB = byte / 1024;
	MB = KB / 1024;

	printf("%.1f MB\n", MB);

	return 0;
}