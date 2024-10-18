#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 0;

	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) if (scanf("%d", &arr[i]) != 1 || arr[i] < 1 || arr[i] > 1000) return 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) printf("%d ", arr[j]);
		for (int j = 0; j < i; j++) printf("%d ", arr[j]);
		printf("\n");
	}

	return 0;
}