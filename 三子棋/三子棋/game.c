#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include"game.h"

void InitBoard(char board[][COL], int row, int col)  //���̳�ʼ��
{
	memset(board, ' ', row * col * sizeof(char));
}

void ShowBoard(char board[][COL], int row, int col)   //��ӡ����
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

void PlayerMove(char board[][ROW], int row, int col)   //����ƶ�
{
	int x = 0, y = 0;
	while (1)
	{
		printf("������ƶ�\n");
		printf("��������Ҫ��������꣨1-3����");
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
				printf("��λ��������\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
		}
	}
}

int IsWin(char board[][COL], int row, int col)   //�ж���Ӯ����ƽ��
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

int IsFull(char board[][COL], int row, int col)   //�ж������Ƿ�����
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

void ComputerMove(char board[][COL], int row, int col)   //�����ƶ�
{
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;      //������������������
		if (board[x][y] == ' ')
		{
			board[x][y] = 'O';
			break;
		}
	}
}