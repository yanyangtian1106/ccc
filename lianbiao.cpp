#define _CRT_SECURE_NO_WARNINGS 1
#include "lianbiao.h"
#include <stdio.h>
#include <stdlib.h>

void Stuprint(stu* ap)
{
	for (int i = 0; i < ap->size; i++)
	{
		printf("%d ", ap->a[i]);
	}
	printf("\n");
}
void StuInit(stu* ap)
{
	ap->a = NULL;
	ap->capacity = ap->size = 0;
}
//Î²²åÀ©ÈÝ
void StuPushBack(stu* ap, add x)//Î²¶Ë²åÈëÊý¾Ý
{
	if (ap->size == ap->capacity)
	{
		int newcopacity = ap->capacity == 0 ? 4:ap->capacity*2;
		add* tmp = (add*)realloc(ap->a, newcopacity * sizeof(add));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ap->a = tmp;
		ap->capacity = newcopacity;
	}
	ap->a[ap->size]=x;
	ap->size++;

}
void StuPopBack(stu* ap);

void StuPushFront(stu* ap, add x);

void StuPopFront(stu* ap);

