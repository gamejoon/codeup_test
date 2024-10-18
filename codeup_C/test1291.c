#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int virus1, virus2, virus3, vaccine;

	if (scanf("%d %d %d", &virus1, &virus2, &virus3) != 3 || virus1 < 1 || virus2 < 1 || virus3 < 1 || virus1 > 3000 || virus2 > 3000 || virus3 > 3000 || virus1 > virus2 || virus2 > virus3) return 0;

	for (int i = virus1; i > 0; i--)
	{
		if (virus1 % i == 0 && virus2 % i == 0 && virus3 % i == 0)
		{
			vaccine = i;
			break;
		}
	}
	printf("%d\n", vaccine);

	return 0;
}