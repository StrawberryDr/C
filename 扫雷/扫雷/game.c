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
}//初始化

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
}//打印

void SetMine(char mine[][COLS], int row, int col)//9  9
{
	int count = MINENUM;  //雷的个数 
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
	printf("请输入要排查的坐标：>");
	scanf("%d%d", &x, &y);
	if (mine[x][y] == '1')//如果第一次输入坐标为雷将坐标改为0即非雷
	{
		mine[x][y] = '0';//获取周围雷的个数
		ch = GetMine(mine, x, y);
		mineInfo[x][y] = ch + '0';
		while (ret)//在其余有空的地方重新设置一个雷
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
	SafeMine(mine, mineInfo, row, col); //先对要输入的坐标进行排查 如果为雷 将雷取消 并在其他位置重新布雷
	while (count  < row * col - MINENUM)
	{
		printf("请输入你的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
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
			printf("坐标不合法\n");
		}
	}

	if (count == row * col - MINENUM)
	{
		printf("扫雷成功\n");
	}
}