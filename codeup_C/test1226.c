#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int lotto[7], lotto_select[6], cnt = 0, bonus = 0, grade;

	for (int i = 0; i < 7; i++) if (scanf("%d", &lotto[i]) != 1 || lotto[i] < 1) return 0;
	for (int i = 0; i < 6; i++) if (scanf("%d", &lotto_select[i]) != 1 || lotto_select[i] < 1) return 0;

	for (int i = 0; i < 6; i++) for (int j = 0; j < 6; j++) if (lotto_select[i] == lotto[j]) cnt++;
	for (int i = 0; i < 6; i++) if (lotto_select[i] == lotto[6]) bonus++;

	switch (cnt)
	{
	case 6:
		grade = 1;
		break;
		
	case 5:
		if (bonus == 1) grade = 2;
		else grade = 3;
		break;

	case 4:
		grade = 4;
		break;

	case 3:
		grade = 5;
		break;

	default:
		grade = 0;
	}

	printf("%d\n", grade);

	return 0;
}