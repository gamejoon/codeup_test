#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int BMI;

	if (scanf("%d", &BMI) != 1 || BMI < 1) return 0;

	printf("%s\n", BMI <= 10 ? "����" : BMI <= 20 ? "��ü��" : "��");

	return 0;
}