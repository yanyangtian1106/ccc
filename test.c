#define _CRT_SECURE_NO_WARNINGS 

#include "game.h"
//测试三子棋游戏
void menu()
{
	printf("****************************************************\n");
	printf("***********1.play             0.exit   *************\n");
	printf("****************************************************\n");
}
//游戏的整个算法实现
void game()
{
	//数组-存放走出的信息
	char board[ROW][COL] = { 0 };//希望数组中全部是空格,0也是不可打印字符，所以不初始化棋盘呈现出的也是空格，但是不是空格，空格最合适，所以加了一个初始化函数
	//初始化棋盘
	initboard(board,ROW,COL);
	//打印棋盘
	displayboard(board,ROW,COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择；>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误！请重新选择！");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
