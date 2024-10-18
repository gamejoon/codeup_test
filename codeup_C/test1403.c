#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k;

	if (scanf("%d", &k) != 1 || k < 1 || k > 100) return 0;

	int* arr = (int*)malloc(sizeof(int) * k);

	for (int i = 0; i < k; i++) if (scanf("%d", &arr[i]) != 1) return 0;

	for (int i = 0; i < 2; i++) for (int j = 0; j < k; j++) printf("%d\n", arr[j]);

	free(arr);

	return 0;
}