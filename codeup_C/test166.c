#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year;

	if (scanf("%d", &year) != 1 || year < 1);

	printf("%s\n", year % 400 == 0 ? "Leap" : ((year % 4 == 0 && year % 100 != 0) ? "Leap" : "Normal"));

	return 0;
}