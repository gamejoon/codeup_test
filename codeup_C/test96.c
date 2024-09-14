#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define BOARD_SIZE 19

int main()
{
	int cnt, board[BOARD_SIZE][BOARD_SIZE] = { 0 }, x, y;

	if (scanf("%d", &cnt) != 1 || cnt < 0 || cnt > 10) return 0;

	for (int i = 0; i < cnt; i++)
	{
		if (scanf("%d %d", &x, &y) != 2 || x < 1 || x > BOARD_SIZE || y < 1 || y > BOARD_SIZE) return 0;
		board[x - 1][y - 1] = 1;
	}

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++) printf("%d ", board[i][j]);
		printf("\n");
	}

	return 0;
}