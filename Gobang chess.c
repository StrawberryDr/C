#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
#include"match.h"

void menu()
{
	printf("**********************\n");
	printf("****** 0-->退出 ******\n");
	printf("**** 1-->开始游戏 ****\n");
}

void game()
{
	int ret = 0;
	char board[3][3] = { 0 };

	InitBoard(board,ROW,COL);
	ShowBoard(board,ROW,COL);

	while (1)
	{
		PlayerMove(board, ROW, COL); //每次硬都要判断是否赢了比赛 
		ret = IsWin(board,ROW,COL); 
		if(ret != ' ') 
		{ 
			break; 
		}
		ShowBoard(board,ROW,COL); 
		ComputerMove(board,ROW,COL); 
		if(ret != ' ') 
		{ 
			break;
		}
		ShowBoard(board,ROW,COL); 
	}
	if(ret == 'x') 
	{ 
		printf("玩家获胜\n"); 
	}
	else if(ret == 'O') 
	{ 
		printf("电脑获胜\n"); 
	}
	else if(ret == 'Q') 
	{ 
		printf("平局\n"); 
	} 
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择--->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("游戏结束\n");
			break;
		case 1:
			printf("游戏开始\n");
			game();
			break;
		default:
			printf("输入错误");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}