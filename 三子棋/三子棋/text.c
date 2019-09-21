#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()                            //����һ����ϷĿ¼ ���Ը���ϲ�ý����޸�
{
	printf("**********************\n");
	printf("****** 0-->�˳� ******\n");
	printf("**** 1-->��ʼ��Ϸ ****\n");
}

void game()                            //����ʵ����Ϸ�ĺ��� ��������˳�ʼ�����̵�һϵ�в���
{
	int ret = 0;
	char board[3][3] = { 0 };

	InitBoard(board, ROW, COL);          //��ʼ������
	ShowBoard(board, ROW, COL);          //��ӡ����

	while (1)
	{
		PlayerMove(board, ROW, COL);            //����ƶ�
		ret = IsWin(board, ROW, COL);          //�ж��Ƿ��ʤ�������һ����ʤ�����ƽ�֣�������ѭ��
		if (ret == ' ')
		{
			break;
		}
		ShowBoard(board, ROW, COL);          //ÿһ���ƶ�֮��Ҫ��ӡһ������ ��ʾ�������ӵ�λ��

		ComputerMove(board, ROW, COL);          //�����ƶ�
		ret = IsWin(board, ROW, COL);          //�ж��Ƿ��ʤ�������һ����ʤ�����ƽ�֣�������ѭ��
		if (ret == ' ')
		{
			break;
		}
		ShowBoard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);          //�ж��Ƿ��ʤ��������ʾ
		if (ret == 'x')
		{
			printf("��������Ӯ��\n");
			break;
		}
		else if (ret == 'O')
		{
			printf("Ŷ�����˰�\n");
			break;
		}
		else if (ret == 1)
		{
			printf("ƽ��\n");
			break;
		}
	}
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));          //�漴���ӣ��õ��Բ������������
	do
	{
		menu();
		printf("��ѡ��--->");
		scanf("%d", &input);
		switch (input)          //����0�Ϳ�ʼ��Ϸ������0�˳���Ϸ�����벻�Ϸ�Ҳ������ʾ
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
	system("pause");          //��ֹ����ʱ����̵������н��һ������
	return 0;
}
