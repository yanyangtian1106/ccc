#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct创建结构体，点. 的使用  ->的使用
//描述一个学生
//使用struct创建一个结构体类型 struct stu
struct stu
{
	//成员变量
	char name[10];
	int age;
	char id[10];
};
int main()
{
	//使用struct stu这个类型创建了一个学生对象s1，并初始化
	struct stu s1 = { "张三",20,"20212020" };


	struct stu* ps = &s1;

	//->结构体指针操作符
	printf("%s\n", ps->name);//使用指针和箭头来直接找到结构变量中的成员名
	//左边结构体指针->右边成员名

	//也可以使用指针来打印
	printf("%s\n", (*ps).name);
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);                               //使用.来选择结构体中的内容
	printf("%s\n", s1.id);
	//s1是结构体变量，点.后面才是成员名
	return 0;
}