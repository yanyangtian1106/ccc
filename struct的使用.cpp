#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct�����ṹ�壬��. ��ʹ��  ->��ʹ��
//����һ��ѧ��
//ʹ��struct����һ���ṹ������ struct stu
struct stu
{
	//��Ա����
	char name[10];
	int age;
	char id[10];
};
int main()
{
	//ʹ��struct stu������ʹ�����һ��ѧ������s1������ʼ��
	struct stu s1 = { "����",20,"20212020" };


	struct stu* ps = &s1;

	//->�ṹ��ָ�������
	printf("%s\n", ps->name);//ʹ��ָ��ͼ�ͷ��ֱ���ҵ��ṹ�����еĳ�Ա��
	//��߽ṹ��ָ��->�ұ߳�Ա��

	//Ҳ����ʹ��ָ������ӡ
	printf("%s\n", (*ps).name);
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);                               //ʹ��.��ѡ��ṹ���е�����
	printf("%s\n", s1.id);
	//s1�ǽṹ���������.������ǳ�Ա��
	return 0;
}