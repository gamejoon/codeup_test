#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hours, minutes;

	if (scanf("%d %d", &hours, &minutes) != 2 || hours < 0 || hours > 23 || minutes < 0 || minutes > 59) return 0;

	if (minutes - 30 < 0)
	{
		if (hours == 0) hours = 23;
		else hours--;

		minutes += 30;
	}
	else minutes -= 30;

	printf("%d %d\n", hours, minutes);

	return 0;
}