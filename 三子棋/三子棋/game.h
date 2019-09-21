#pragma once

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h> 
#define ROW 3 
#define COL 3           

//��ʼ������ 
void InitBoard(char board[][COL], int row, int col);

//��ӡ���� 
void ShowBoard(char board[][COL], int row, int col);

//����ƶ� 
void PlayerMove(char board[][COL], int row, int col);

//�Ƿ�Ӯ����ʤ�� 
int IsWin(char board[][COL], int row, int col);

//�ж������Ƿ�����
int IsFull(char board[][COL], int row, int col);

//�����ƶ� 
void ComputerMove(char board[][COL], int row, int col);
