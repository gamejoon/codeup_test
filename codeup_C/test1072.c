#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
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