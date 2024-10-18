#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, result = NULL, cnt = 0;
	char sign;

	do
	{
		if (scanf("%d", &num) != 1) return 0;

		if (cnt == 0)
		{
			result = num;
			cnt++;
		}
		else
		{
			switch (sign)
			{
			case '+':
				result += num;
				break;
			
			case '-' :
				result -= num;
				break;

			case '*':
				result *= num;
				break;

			case '/':
				if (num != 0) result /= num;
				else return 0;
			}
		}
		if (scanf("%c", &sign) != 1 || (sign != '+' && sign != '-' && sign != '*' && sign != '/' && sign != '=')) return 0;
	} while (sign != '=');

	printf("%d\n", result);

	return 0;
}