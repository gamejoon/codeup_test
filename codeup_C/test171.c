#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int grade, class_num, num;

	if (scanf("%d %d %d", &grade, &class_num, &num) != 3 || grade < 1 || grade > 3 || class_num < 1 || class_num > 20 || num < 1 || num > 999) return 0;

	printf("%d%02d%03d\n", grade, class_num, num);

	return 0;
}