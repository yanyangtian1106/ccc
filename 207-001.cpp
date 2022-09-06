#define _CRT_SECURE_NO_WARNINGS 1
/*1．所属年份：2010.9;2011.3;2012.3;2012.9
请编写函数fun，其功能是：找出2×M整型二维数组中最大元素的值，并将此值返回调用函数。
注意：部分源程序在文件PROG1.C中。
请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。*/

//#include <stdio.h>
//#define M 4
//int fun(int a[][M])
//{
//	int i;
//	int j;
//	int max=0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			if(a[i][j]>max)
//			{
//				max = a[i][j];
//			}
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int arr[2][M] = { 5,8,3,45,76,-4,12,82 }; 
//	/*void NONO();*/
//
//	printf("max =%d\n",fun(arr) );//输出到屏幕
//
//	/*NONO();*/
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//	FILE* wf;
//	int arr[][M] = { 5,8,3,90,76,-4,12,82 };
//
//	wf = fopen("out.dat", "w");
//	fprintf(wf, "max=%d\n", fun(arr));
//	fclose(wf);
//}
