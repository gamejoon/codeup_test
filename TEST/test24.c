#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
//	char str[51];
//	scanf("%s", str);
//	for (int i = 0; i < strlen(str); i++) printf("%c\n", str[i]);
//	return 0;
//}

int main()
{
	char str[51];
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) printf("\'%c\'\n", str[i]);
	return 0;
}