#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	//是字母时
	if (c >= 'A' && c <= 'Z')
	{
		//行数
		for (int i = 1; i < c - 'A' + 1; i++)
		{
			//打印空格
			for (int j = 1; j <= c - 'A' + 1 - i; j++)//行数减去第几行
			{
				printf(" ");
			}
			//打印字母
			//先增
			for (int j = 1; j <= i; j++)
			{
				printf("%c", 'A' + j - 1);
			}
			//后减
			for (int j = i - 1; j >= 1; j--)
			{
				printf("%c", 'A' + j - 1);
			}
			printf("\n");
		}
	}
	else
	{
		//行数
		for (int i = 1; i < c - '1' + 1; i++)
		{
			//打印空格
			for (int j = 1; j <= c - '1' + 1 - i; j++)//行数减去第几行
			{
				printf(" ");
			}
			//打印数字
			//先增
			for (int j = 1; j <= i; j++)
			{
				printf("%c", '1' + j - 1);
			}
			//后减
			for (int j = i - 1; j >= 1; j--)
			{
				printf("%c", '1' + j - 1);
			}
			printf("\n");
		}
	}
	return 0;
}




////输出字母三角形
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	//行数
//	for (int i = 1; i <= n; i++)
//	{
//		//打印每行空格
//		for (int j=n-i;j>0;j--)
//		{
//			printf(" ");
//		}
//		//打印每行字母
//		for (int k = i * 2 - 1; k > 0; k--)
//		{
//			printf("%c", 'A' + i - 1);
//		}
//		//换行
//		printf("\n");
//	}
//	return 0;
//}