#pragma once


typedef int add;
//动态顺序表
typedef struct SeqList
{
	add* a;
	add size;//表示数组中存储了多少个数据
	add capacity;//数组实际能存储数据的空间是多大
}stu;
void Stuprint(stu* ap);
//接口函数
void StuInit(stu* ap);
void StuPushBack(stu* ap, add x);//在尾端插入数据
//void StuPopBack(stu* ap);
//void StuPushFront(stu* ap, add x);
//void StuPopFront(stu* ap);



//#define N 10
//typedef int add;
////静态顺序表
//typedef struct SeqList
//{
//	int a[N];
//	int size;//表示数组中存储了多少个数据
//}stu;
////接口函数
//void StuInIt(stu* ap);
//void StuPBack(stu* ap, add x);
//void StuPopBack(stu* ap);
//void StuPushFront(stu* ap, add x);//在尾端插入数据
//void StuPopFront(stu* ap);
