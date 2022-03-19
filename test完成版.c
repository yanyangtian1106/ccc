#define _CRT_SECURE_NO_WARNINGS 1
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
	char ret;
	//数组-存放走出的信息
	char board[ROW][COL] = { 0 };//希望数组中全部是空格,0也是不可打印字符，所以不初始化棋盘呈现出的也是空格，但是不是空格，空格最合适，所以加了一个初始化函数
	//初始化棋盘
	initboard(board, ROW, COL);
	//打印棋盘
	displayboard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret=iswin(board,ROW,COL);
		printf("return返回值为=%c\n", ret);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//判断电脑是否赢
		ret=iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你取得胜利\n");
	}
	else if (ret == '#')
	{
		printf("失败\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //使用srand函数设置随机数生成器，可以用时间初来设置-使用time函数，time函数 的参数使用空指针-NULL ，因为time函数返回的是一个time-t的值
	                   //我们需要一个整型的返回值，可以使用unsigned int来强制转换成整型,使用srand函数和time函数需要引头文件<stdlib.h>
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
