#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int grade, class_num, num;
	
	if (scanf("%d %d %d", &grade, &class_num, &num) != 3 || grade < 1 || grade > 3 || class_num < 1 || class_num > 6 || num < 1 || num > 30) return 0;

	printf("%d%d%02d\n", grade, class_num, num);

	return 0;
}