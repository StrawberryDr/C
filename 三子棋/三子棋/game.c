#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include"game.h"

void InitBoard(char board[][COL], int row, int col)  //棋盘初始化
{
	memset(board, ' ', row * col * sizeof(char));
}

void ShowBoard(char board[][COL], int row, int col)   //打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[][ROW], int row, int col)   //玩家移动
{
	int x = 0, y = 0;
	while (1)
	{
		printf("请玩家移动\n");
		printf("请输入您要下棋的坐标（1-3）：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
			{
				printf("该位置有棋子\n");
			}
		}
		else
		{
			printf("坐标不合法\n");
		}
	}
}

int IsWin(char board[][COL], int row, int col)   //判断输赢或者平局
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}

		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}

		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		{
			return board[0][2];
		}

		if (IsFull(board, row, col) == 1)
		{
			return 1;
		}
	}
	return 0;
}

int IsFull(char board[][COL], int row, int col)   //判断棋盘是否已满
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

void ComputerMove(char board[][COL], int row, int col)   //电脑移动
{
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;      //产生随机坐标放置棋子
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
}