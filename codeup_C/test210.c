#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int menu_cal(int);

int main()
{
	int menu1, menu2;

	if (scanf("%d %d", &menu1, &menu2) != 2 || menu1 < 1 || menu1 > 5 || menu2 < 1 || menu2 > 5) return 0;

	printf("%s\n", menu_cal(menu1) + menu_cal(menu2) <= 500 ? "no angry" : "angry");

	return 0;
}

int menu_cal(int menu)
{
	int cal;

	switch (menu)
	{
	case 1:
		cal = 400;
		break;

	case 2:
		cal = 340;
		break;

	case 3:
		cal = 170;
		break;

	case 4:
		cal = 100;
		break;

	default:
		cal = 70;
	}

	return cal;
}