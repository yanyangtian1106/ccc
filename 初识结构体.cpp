#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���   Stu�������ǩ   struct Stu �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}/*���������ȫ�ֽṹ�����*/s1, s2, s3;//�ṹ��������һ��������Ժ���Ҫ��һ���ֺ�


typedef struct Stu//typedef-���������Ľṹ��������������	
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu/*������ṹ��������������Ϊstu*/;

int main()
{
	struct Stu s;//����ľֲ��Ľṹ�����
	stu s1;
	return 0;
}
