#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// while, for, do-while문 사용 불가 문제
	int num, count;

	scanf("%d", &count);


reload:
	if (count-- > 0)
	{
		scanf("%d", &num);
		printf("%d\n", num);
		goto reload;
	}

	return 0;
}