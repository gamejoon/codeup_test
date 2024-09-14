#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define BOX_SIZE 10

int main()
{
	int box[BOX_SIZE][BOX_SIZE] = { 0 }, x = 1, y = 1;

	for (int i = 0; i < BOX_SIZE; i++) for (int j = 0; j < BOX_SIZE; j++) if (scanf("%d", &box[i][j]) != 1 || (box[i][j] != 0 && box[i][j] != 1 && box[i][j] != 2)) return 0;
	
	box[y][x] = 9;

	while (1)
	{
		if (box[y][x + 1] == 0)
		{
			box[y][x + 1] = 9;
			x++;
		}
		else if (box[y][x + 1] == 2)
		{
			box[y][x + 1] = 9;
			x++;
			break;
		}
		else if (box[y + 1][x] == 0)
		{
			box[y+ 1][x] = 9;
			y++;
		}
		else if (box[y + 1][x] == 2)
		{
			box[y + 1][x] = 9;
			y++;
			break;
		}
		else break;
	}

	for (int i = 0; i < BOX_SIZE; i++)
	{
		for (int j = 0; j < BOX_SIZE; j++) printf("%d ", box[i][j]);
		printf("\n");
	}

	return 0;
}