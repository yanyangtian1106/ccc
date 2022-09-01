#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;                          //命名空间，<iostream>没有命名空间  C++标准程序库中的所有标识符都被定义于一个名为std的namespace中
int main()
{
	char* a = new char[100];                   //new:用于动态内存分配的运算符
	cin.getline(a, 100, 'a');
	cout << a << endl;                         //cout:输出 endl:结束并换行
	free(a);                                   //free(释放内存)
	return 0;
}