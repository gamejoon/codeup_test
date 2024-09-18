#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Leap(int);

int main()
{
	int year, month, day;

	if (scanf("%d %d", &year, &month) != 2 || year < 1 || month < 1 || month > 12) return 0;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;

	case 2:
		day = year % 400 == 0 ? 29 : year % 4 == 0 && year % 100 != 0 ? 29 : 28;
		break;

	default:
		return 0;
	}

	printf("%d\n", day);

	return 0;
}