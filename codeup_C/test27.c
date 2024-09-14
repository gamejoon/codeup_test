#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, month, day;
	scanf("%4d.%2d.%2d", &year, &month, &day);;
	printf("%02d-%02d-%04d", day, month, year);
	return 0;
}