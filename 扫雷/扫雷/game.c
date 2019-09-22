#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}//��ʼ��

void ShowBoard(char board[][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	printf("======================\n");
	for (i = 0; i < rows - 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < rows - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < cols - 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("======================\n");
}//��ӡ

void SetMine(char mine[][COLS], int row, int col)//9  9
{
	int count = MINENUM;  //�׵ĸ��� 
	int x = 0;
	int y = 0;
	while (count != 0)
	{
		x = rand() % row + 1;//[0-9)  [1,10)
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

void SafeMine(char mine[][COLS], char mineInfo[][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int ret = 1;
	int ch = 0;
	printf("������Ҫ�Ų�����꣺>");
	scanf("%d%d", &x, &y);
	if (mine[x][y] == '1')//�����һ����������Ϊ�׽������Ϊ0������
	{
		mine[x][y] = '0';//��ȡ��Χ�׵ĸ���
		ch = GetMine(mine, x, y);
		mineInfo[x][y] = ch + '0';
		while (ret)//�������пյĵط���������һ����
		{
			x = rand() % 9 + 1;
			y = rand() % 9 + 1;
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';
			}
			ret--;
		}
	}
	ShowBoard(mineInfo, row, col);
}

 static int GetMine(char mine[][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x][y - 1] - 8 * '0';
}


void FindMine(char mineInfo[][COLS], char mine[][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	SafeMine(mine, mineInfo, row, col); //�ȶ�Ҫ�������������Ų� ���Ϊ�� ����ȡ�� ��������λ�����²���
	while (count  < row * col - MINENUM)
	{
		printf("������������꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����\n");
				break;
			}
			else
			{
				int mineNum = GetMine(mine, x, y);
				mineInfo[x][y] = mineNum + '0';
				count++;

				ShowBoard(mineInfo, ROWS, COLS);
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
		}
	}

	if (count == row * col - MINENUM)
	{
		printf("ɨ�׳ɹ�\n");
	}
}