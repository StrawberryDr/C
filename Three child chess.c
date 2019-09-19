#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
#include"match.h"

void menu()
{
	printf("**********************\n");
	printf("****** 0-->�˳� ******\n");
	printf("**** 1-->��ʼ��Ϸ ****\n");
}

void game()
{
	int ret = 0;
	char board[3][3] = { 0 };

	InitBoard(board,ROW,COL);
	ShowBoard(board,ROW,COL);

	while (1)
	{
		PlayerMove(board, ROW, COL); //ÿ��Ӳ��Ҫ�ж��Ƿ�Ӯ�˱��� 
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
		printf("��һ�ʤ\n"); 
	}
	else if(ret == 'O') 
	{ 
		printf("���Ի�ʤ\n"); 
	}
	else if(ret == 'Q') 
	{ 
		printf("ƽ��\n"); 
	} 
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��--->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("��Ϸ����\n");
			break;
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}