#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hours, minutes;
	
	scanf("%d %d", &hours, &minutes);
	
	hours = (24 + hours - (1 - minutes / 30)) % 24;
	minutes = (1 - minutes / 30) * 60 + minutes - 30;

	printf("%d %d\n", hours, minutes);

	return 0;
}
