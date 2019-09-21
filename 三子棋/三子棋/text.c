#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()                            //这是一个游戏目录 可以根据喜好进行修改
{
	printf("**********************\n");
	printf("****** 0-->退出 ******\n");
	printf("**** 1-->开始游戏 ****\n");
}

void game()                            //这是实现游戏的函数 里面包括了初始化棋盘等一系列操作
{
	int ret = 0;
	char board[3][3] = { 0 };

	InitBoard(board, ROW, COL);          //初始化棋盘
	ShowBoard(board, ROW, COL);          //打印棋盘

	while (1)
	{
		PlayerMove(board, ROW, COL);            //玩家移动
		ret = IsWin(board, ROW, COL);          //判断是否获胜，如果有一方获胜或出现平局，则跳出循环
		if (ret == ' ')
		{
			break;
		}
		ShowBoard(board, ROW, COL);          //每一次移动之后都要打印一次棋盘 显示放置棋子的位置

		ComputerMove(board, ROW, COL);          //电脑移动
		ret = IsWin(board, ROW, COL);          //判断是否获胜，如果有一方获胜或出现平局，则跳出循环
		if (ret == ' ')
		{
			break;
		}
		ShowBoard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);          //判断是否获胜后做出提示
		if (ret == 'x')
		{
			printf("哈哈哈你赢啦\n");
			break;
		}
		else if (ret == 'O')
		{
			printf("哦豁输了吧\n");
			break;
		}
		else if (ret == 1)
		{
			printf("平局\n");
			break;
		}
	}
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));          //随即种子，让电脑产生随机的坐标
	do
	{
		menu();
		printf("请选择--->");
		scanf("%d", &input);
		switch (input)          //输入0就开始游戏，输入0退出游戏，输入不合法也会有提示
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
	system("pause");          //防止运行时间过短导致运行结果一闪而过
	return 0;
}
