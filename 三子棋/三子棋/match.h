#pragma once

#include<stdlib.h>
#include<time.h> 
#define ROW 3 
#define COL 3 

//��ʼ������ 
void InitBoard(char board[][ROW],int row,int col); 

//��ӡ���� 
void ShowBoard(char board[][ROW],int row,int col); 

//����ƶ� 
void PlayerMove(char board[][ROW],int row,int col); 

//�Ƿ�Ӯ����ʤ�� 
int IsWin(char board[][ROW],int row,int col); 

//�����ƶ� 
void ComputerMove(char board[][ROW],int row,int col);
