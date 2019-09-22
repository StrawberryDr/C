#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "stdlib.h"

#define ROW  9
#define COL  9  //内部的扫雷区域

#define ROWS  ROW+2
#define COLS  COL+2  //在周围加一圈为坐标的数字


#define MINENUM 10  //初始化雷的个数

void InitBoard(char board[][COLS], int rows, int cols, char set); //初始化
void ShowBoard(char board[][COLS], int rows, int cols);  //打印
int  GetMine(char mine[][COLS], int x, int y);
void SetMine(char mine[][COLS], int row, int col); //设置雷
void SafeMine(char mine[][COLS], char mineInfo[][COLS], int row, int col);
void FindMine(char mineInfo[][COLS], char mine[][COLS], int row, int col);//排雷
