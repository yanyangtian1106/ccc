#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//描述一个学生的一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字   Stu机构体标签   struct Stu 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}/*定义的三个全局结构体变量*/s1, s2, s3;//结构体申明是一条语句所以后面要加一个分号


typedef struct Stu//typedef-给这个定义的结构体类型重新命名	
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu/*把这个结构体类型重新命名为stu*/;

int main()
{
	struct Stu s;//定义的局部的结构体变量
	stu s1;
	return 0;
}
