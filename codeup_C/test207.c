#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int yut, cnt = 0;

	for (int i = 0; i < 4; i++)
	{
		if (scanf("%d", &yut) != 1 || (yut != 0 && yut != 1)) return 0;
		if (yut == 1) cnt++;
	}

	switch (cnt)
	{
	case 0:
		printf("��\n");
		break;
		
	case 1:
		printf("��\n");
		break;

	case 2:
		printf("��\n");
		break;

	case 3:
		printf("��\n");
		break;

	case 4:
		printf("��\n");
		break;
	}

	return 0;
}