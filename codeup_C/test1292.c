#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char dna[10];
	int sum = 0;
	
	for (int i = 0; i < 10; i++) if (scanf("%c", &dna[i]) != 1 || dna[i] < '0' || dna[i] > '9') return 0;

	for (int i = 0; i < 10; i++) sum += dna[i] - '0';

	printf("%s\n", sum % 7 == 4 ? "suspect" : "citizen");

	return 0;
}