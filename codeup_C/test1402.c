#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	if (scanf("%d", &n) != 1 || n < 0 || n > 1000) return 0;

	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) if (scanf("%d", &arr[i]) != 1) return 0;

	for (int i = n - 1; i >= 0; i--) printf("%d ", arr[i]);

	free(arr);

	return 0;
}