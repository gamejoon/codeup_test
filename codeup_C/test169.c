#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;

	if (scanf("%d", &age) != 1 || age < 1) return 0;

	printf("%02d %d\n", 2012 - age + 1 >= 2000 ? 12 - age + 1 : 112 - age + 1, 2012 - age + 1 >= 2000 ? 3 : 1);

	return 0;
}