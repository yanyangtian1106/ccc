#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
void  fun(char* a)
{
	int i, j = 0;

	for (i = 0; a[i] != 0; i++)
		if (a[i] != '*')
		{
			break;//�ҵ���һ����*Ԫ�أ���¼�±�i 
		}

	for (j = i; a[i] != 0; i++)
	{
		if (a[i] != '*')
		{
			a[j] = a[i];  //ɾ���±��j=i���Ժ�ʼ������Ԫ���е�* 
			j++;
		}
	}


	a[j] = 0;// a[j]='\0';  ����ɾ����*��������Ԫ�ظ�����ԭ�����٣����ֶ������ַ���������־�� 


}
int main()
{
	char arr[10] = { "**a1s**42" };
	fun(arr);
	cout << arr << endl;
	return 0;
}