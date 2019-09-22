#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "stdlib.h"

#define ROW  9
#define COL  9  //�ڲ���ɨ������

#define ROWS  ROW+2
#define COLS  COL+2  //����Χ��һȦΪ���������


#define MINENUM 10  //��ʼ���׵ĸ���

void InitBoard(char board[][COLS], int rows, int cols, char set); //��ʼ��
void ShowBoard(char board[][COLS], int rows, int cols);  //��ӡ
int  GetMine(char mine[][COLS], int x, int y);
void SetMine(char mine[][COLS], int row, int col); //������
void SafeMine(char mine[][COLS], char mineInfo[][COLS], int row, int col);
void FindMine(char mineInfo[][COLS], char mine[][COLS], int row, int col);//����
