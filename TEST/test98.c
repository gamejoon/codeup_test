#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int w, h, n, l, d, x, y;

	if (scanf("%d %d", &w, &h) != 2 || w < 1 || w > 100 || h < 1 || h > 100) return 0;

	int** board = (int**)malloc(sizeof(int*) * h);
	for (int i = 0; i < h; i++) board[i] = (int*)malloc(sizeof(int) * w);

	for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) board[i][j] = 0;

	if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 0;

	for (int i = 0; i < n; i++)
	{
		if (scanf("%d %d %d %d", &l, &d, &x, &y) != 4 || (d != 0 && d != 1) || (d == 0 && l > w - (x - 1)) || (d == 1 && l > h - (y - 1))) return 0;
		
		for (int j = 0; j < l; j++)
		{
			if (d == 0)
			{
				board[y - 1][x - 1 + j] = 1;
				printf("x = %d, y = %d\n", x - 1 + j, y - 1);
			}
			else
			{
				board[y - 1 + j][x - 1] = 1;
				printf("x = %d, y = %d\n", x - 1, y - 1 + j);
			}
		}
	}

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++) printf("%d ", board[i][j]);
		printf("\n");
	}

	for (int i = 0; i < h; i++) free(board[i]);
	free(board);

	return 0;
}