#define  _CRT_SECURE_NO_WARNINGS

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		int j = 0;
		for (j = 0; j <= col; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}

	
}