#define _CRT_SECURE_NO_WARNINGS 

#include "game.h"
//������������Ϸ
void menu()
{
	printf("****************************************************\n");
	printf("***********1.play             0.exit   *************\n");
	printf("****************************************************\n");
}
//��Ϸ�������㷨ʵ��
void game()
{
	//����-����߳�����Ϣ
	char board[ROW][COL] = { 0 };//ϣ��������ȫ���ǿո�,0Ҳ�ǲ��ɴ�ӡ�ַ������Բ���ʼ�����̳��ֳ���Ҳ�ǿո񣬵��ǲ��ǿո񣬿ո�����ʣ����Լ���һ����ʼ������
	//��ʼ������
	initboard(board,ROW,COL);
	//��ӡ����
	displayboard(board,ROW,COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
