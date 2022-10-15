#define _CRT_SECURE_NO_WARNINGS 1
#include "lianbiao.h"
#include <stdio.h>
#include <stdlib.h>
void TestSeqList1()
{
	stu s1;
	StuInit(&s1);
	StuPushBack(&s1, 1);
	StuPushBack(&s1, 2);
	StuPushBack(&s1, 3);
	StuPushBack(&s1, 4);
	StuPushBack(&s1, 5);
	Stuprint(&s1);
}
int main()
{
	TestSeqList1();
	return 0;
}