#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//void displayboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1.打印一行的数据
//		printf(" %c  | %c | %c \n",board[i][0],board[i][1],board[i][2]);            //该函数如果改变棋盘大小参数，就只能改变行数，但是改变不了列数，需要优化
//		//2.打印分割行
//		if (i < row - 1)
//		{
//			printf(" ---|---|---\n");
//		}
//	}
//}


void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{

		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1.打印一行的数据
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
		{

			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}


void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");

	while(1)
	{
		printf("请输入要下的坐标坐标：>");
		scanf("%d %d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		}
		else
		{
			printf("坐标非法请重新输入！\n");
		}
	}
}


void computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1)
	{
		x = rand() & row;                                          //随机数生成函数，使用rand函数需要调用srand函数，srand函数只能调用一次
		y = rand() & col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
}
}

//返回1表示棋盘满了
//返回0表示棋盘没有满
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{

			if (board[i][j] == ' ')
			{
				return 0;
			}

			
		}
	}
	return 1;//表示满了

}

	
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断横三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否平局
	if (1 == isfull(board, ROW, COL))
	{
		return 'Q';
	}

	return 'C';

}