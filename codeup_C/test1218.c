#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;

	if (scanf("%d %d %d", &a, &b, &c) != 3 || a < 1 || b < 1 || c < 1) return 0;

	if ((a > b && a > c && b + c <= a) || (b > a && b > c && a + c <= b) || (c > a && c > b && a + b <= c)) printf("»ï°¢Çü¾Æ´Ô\n");
	else if (a == b && b == c) printf("Á¤»ï°¢Çü\n");
	else if ((a == b && b != c) || (a == c && a != b) || (b == c && a != c)) printf("ÀÌµîº¯»ï°¢Çü\n");
	else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) printf("Á÷°¢»ï°¢Çü\n");
	else printf("»ï°¢Çü\n");

	return 0;
}