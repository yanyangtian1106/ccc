#define ROW 3          //在头文件中定义之后以后需要改动参数直接在头文件中修改就可以修改测试文件中的全部
#define COL 3          //使之更加方便
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//函数申明
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL],int row,int col);

//告诉我们四种游戏状态
//玩家赢-------返回*
//电脑赢-------返回#
//平局---------返回Q
//继续---------返回C
char iswin(char board[ROW][COL],int row,int col);