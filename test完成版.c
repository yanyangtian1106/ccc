#define _CRT_SECURE_NO_WARNINGS 1
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
	char ret;
	//����-����߳�����Ϣ
	char board[ROW][COL] = { 0 };//ϣ��������ȫ���ǿո�,0Ҳ�ǲ��ɴ�ӡ�ַ������Բ���ʼ�����̳��ֳ���Ҳ�ǿո񣬵��ǲ��ǿո񣬿ո�����ʣ����Լ���һ����ʼ������
	//��ʼ������
	initboard(board, ROW, COL);
	//��ӡ����
	displayboard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=iswin(board,ROW,COL);
		printf("return����ֵΪ=%c\n", ret);
		if (ret != 'C')
		{
			break;
		}
		//��������
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret=iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ��ȡ��ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("ʧ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //ʹ��srand���������������������������ʱ���������-ʹ��time������time���� �Ĳ���ʹ�ÿ�ָ��-NULL ����Ϊtime�������ص���һ��time-t��ֵ
	                   //������Ҫһ�����͵ķ���ֵ������ʹ��unsigned int��ǿ��ת��������,ʹ��srand������time������Ҫ��ͷ�ļ�<stdlib.h>
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
