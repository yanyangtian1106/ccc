#pragma once


typedef int add;
//��̬˳���
typedef struct SeqList
{
	add* a;
	add size;//��ʾ�����д洢�˶��ٸ�����
	add capacity;//����ʵ���ܴ洢���ݵĿռ��Ƕ��
}stu;
void Stuprint(stu* ap);
//�ӿں���
void StuInit(stu* ap);
void StuPushBack(stu* ap, add x);//��β�˲�������
//void StuPopBack(stu* ap);
//void StuPushFront(stu* ap, add x);
//void StuPopFront(stu* ap);



//#define N 10
//typedef int add;
////��̬˳���
//typedef struct SeqList
//{
//	int a[N];
//	int size;//��ʾ�����д洢�˶��ٸ�����
//}stu;
////�ӿں���
//void StuInIt(stu* ap);
//void StuPBack(stu* ap, add x);
//void StuPopBack(stu* ap);
//void StuPushFront(stu* ap, add x);//��β�˲�������
//void StuPopFront(stu* ap);
