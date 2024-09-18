#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define BOARD_SIZE 19

int main()
{
	int board[BOARD_SIZE][BOARD_SIZE] = { 0 }, cnt, x, y;
	
	for (int i = 0; i < BOARD_SIZE; i++) for (int j = 0; j < BOARD_SIZE; j++) if (scanf("%d", &board[i][j]) != 1 || (board[i][j] != 0 && board[i][j] != 1)) return 0;
	if (scanf("%d", &cnt) != 1 || cnt < 1 || cnt > 10) return 0;
	
	for (int i = 0; i < cnt; i++)
	{
		if (scanf("%d %d", &y, &x) != 2 || x < 1 || x > BOARD_SIZE || y < 1 || y > BOARD_SIZE) return 0;
		
		for (int j = 0; j < BOARD_SIZE; j++) board[y - 1][j] = !board[y - 1][j];
		for (int j = 0; j < BOARD_SIZE; j++) board[j][x - 1] = !board[j][x - 1];
	}
	
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++) printf("%d ", board[i][j]);
		printf("\n");
	}

	return 0;
}