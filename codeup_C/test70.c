#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;
	
	if (scanf("%d", &month) != 1 || month < 1 || month > 12) return 0;
	
	switch (month)
	{
	case 1:
	case 2:
	case 12:
		printf("winter\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall\n");
	}

	return 0;
}