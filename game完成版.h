#define ROW 3          //��ͷ�ļ��ж���֮���Ժ���Ҫ�Ķ�����ֱ����ͷ�ļ����޸ľͿ����޸Ĳ����ļ��е�ȫ��
#define COL 3          //ʹ֮���ӷ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL],int row,int col);

//��������������Ϸ״̬
//���Ӯ-------����*
//����Ӯ-------����#
//ƽ��---------����Q
//����---------����C
char iswin(char board[ROW][COL],int row,int col);