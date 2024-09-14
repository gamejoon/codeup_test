#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	//printf("%d\n", num);
//	for (int i = 4; i >= 0; i--)
//	{
//		//printf("i = %d\n", i);
//		printf("[%d]\n", num / (int)pow(10, i) * (int)pow(10, i));
//		num -= num / (int)pow(10, i) * (int)pow(10, i);
//	}
//	return 0;
//}

int main()
{
	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]\n", a * 10000, b * 1000, c * 100, d * 10, e);
	return 0;
}