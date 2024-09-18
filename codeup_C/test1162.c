#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, month, day;

	if (scanf("%d %d %d", &year, &month, &day) != 3 || year < 1 || month < 1 || month > 12 || day < 1 || day > 31) return 0;

	printf("%s\n", (year - month + day) % 10 == 0 ? "대박" : "그럭저럭");

	return 0;
}