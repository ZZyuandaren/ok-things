#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j]='set';
		}
	}
}
void DisplayBoard(char mine, int row, int col)
{
	int i, j;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}
