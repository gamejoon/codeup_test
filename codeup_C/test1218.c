#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;

	if (scanf("%d %d %d", &a, &b, &c) != 3 || a < 1 || b < 1 || c < 1) return 0;

	if ((a > b && a > c && b + c <= a) || (b > a && b > c && a + c <= b) || (c > a && c > b && a + b <= c)) printf("�ﰢ���ƴ�\n");
	else if (a == b && b == c) printf("���ﰢ��\n");
	else if ((a == b && b != c) || (a == c && a != b) || (b == c && a != c)) printf("�̵�ﰢ��\n");
	else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) printf("�����ﰢ��\n");
	else printf("�ﰢ��\n");

	return 0;
}