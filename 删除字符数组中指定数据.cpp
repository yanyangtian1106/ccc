#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
void  fun(char* a)
{
	int i, j = 0;

	for (i = 0; a[i] != 0; i++)
		if (a[i] != '*')
		{
			break;//找到第一个非*元素，记录下标i 
		}

	for (j = i; a[i] != 0; i++)
	{
		if (a[i] != '*')
		{
			a[j] = a[i];  //删除下标从j=i及以后开始的所有元素中的* 
			j++;
		}
	}


	a[j] = 0;// a[j]='\0';  由于删除了*，新数组元素个数比原数组少，需手动加入字符串结束标志。 


}
int main()
{
	char arr[10] = { "**a1s**42" };
	fun(arr);
	cout << arr << endl;
	return 0;
}