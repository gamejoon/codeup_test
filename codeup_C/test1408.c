#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char password[21], encryption1[21] = { 0 }, encryption2[21] = { 0 };

	if (scanf("%s", password) != 1) return 0;
	
	for (int i = 0; password[i] != '\0'; i++)
	{
		encryption1[i] = password[i] + 2;
		encryption2[i] = (password[i] * 7) % 80 + 48;
	}

	printf("%s\n%s\n", encryption1, encryption2);

	return 0;
}