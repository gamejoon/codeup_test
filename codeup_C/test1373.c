#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void case_func(int*, int*, int*, int, int, int);
void arr_func(int*, int*, int*, int, int);
void swap(int*, int*);
void cpy_arr(int*, int*, int);

int main()
{
	int n, num, cnt = 0;

	if (scanf("%d %d", &num, &n) != 2 || n < 1) return 0;

	int* arr = (int*)malloc(sizeof(int) * (n + 1));
	int* tmp_arr = (int*)malloc(sizeof(int) * (n + 1));
	
	for (int i = 0; i < n + 1; i++) tmp_arr[i] = 0;

	case_func(arr, tmp_arr, &cnt, num, n + 1, 0);

	free(arr);
	free(tmp_arr);

	printf("%d\n", cnt); 

	return 0;
}

void case_func(int* arr, int* tmp_arr, int* cnt, int num, int n, int m)
{
	if (m == n - 1)
	{
		arr[m] = num;

		int dn_cnt = 0, diff = 1;

		for (int i = 0; i < n - 1; i++) if (arr[i] < arr[i + 1]) dn_cnt++;
	
		if (dn_cnt == 0) arr_func(arr, tmp_arr, cnt, n, 0);
			
		return;
	}
	
	for (int i = num; i >= 0; i--)
	{
		arr[m] = i;
		case_func(arr, tmp_arr, cnt, num - i, n, m + 1);
	}

	return;
}

void arr_func(int* arr, int* tmp_arr, int* cnt, int n, int s)
{
	if (s == n)
	{
		int diff = 0, tmp_cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (tmp_arr[i] == 0) diff++;
			if (tmp_arr[i] == arr[i]) tmp_cnt++;
		}

		if (diff == n)
		{
			(*cnt)++;

			for (int i = 0; i < n; i++) printf("%d ", arr[i]);
			printf("\n");

			cpy_arr(arr, tmp_arr, n);
		}
		else if (tmp_cnt != n)
		{
			(*cnt)++;

			for (int i = 0; i < n; i++) printf("%d ", arr[i]);
			printf("\n");

			cpy_arr(arr, tmp_arr, n);
		}

		return;
	}

	for (int i = s; i < n; i++)
	{
		if (arr[s] != arr[i]) swap(&arr[s], &arr[i]);
		
		arr_func(arr, tmp_arr, cnt, n, s + 1);

		if (arr[s] != arr[i]) swap(&arr[s], &arr[i]);
	}
}

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	return;
}

void cpy_arr(int* arr, int* tmp_arr, int n)
{
	for (int i = 0; i < n + 1; i++) tmp_arr[i] = arr[i];

	return;
}