#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;                          //�����ռ䣬<iostream>û�������ռ�  C++��׼������е����б�ʶ������������һ����Ϊstd��namespace��
int main()
{
	char* a = new char[100];                   //new:���ڶ�̬�ڴ����������
	cin.getline(a, 100, 'a');
	cout << a << endl;                         //cout:��� endl:����������
	free(a);                                   //free(�ͷ��ڴ�)
	return 0;
}