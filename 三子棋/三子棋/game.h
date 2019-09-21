#pragma once

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h> 
#define ROW 3 
#define COL 3           

//初始化棋盘 
void InitBoard(char board[][COL], int row, int col);

//打印棋盘 
void ShowBoard(char board[][COL], int row, int col);

//玩家移动 
void PlayerMove(char board[][COL], int row, int col);

//是否赢得了胜利 
int IsWin(char board[][COL], int row, int col);

//判断棋盘是否已满
int IsFull(char board[][COL], int row, int col);

//电脑移动 
void ComputerMove(char board[][COL], int row, int col);
