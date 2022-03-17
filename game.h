#define ROW 3          //在头文件中定义之后以后需要改动参数直接在头文件中修改就可以修改测试文件中的全部
#define COL 3          //使之更加方便
#include <stdio.h>
//函数申明
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);