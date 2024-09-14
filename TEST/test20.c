#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int front, backend;

	scanf("%d-%d", &front, &backend);

	printf("%06d%7d\n", front, backend);

	return 0;
}