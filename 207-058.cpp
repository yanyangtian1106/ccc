#define _CRT_SECURE_NO_WARNINGS 1
/*
程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数fun(int a[][N]，int n)，
该函数的功能是：使数组左下半三角元素中的值乘以n。例如，若n的值为3，a数组中的值为：

则返回主程序后a数组中的值应为：
　
注意：部分源程序在文件PROG1.C中。
请勿改动函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。

N*N
A00
A10  A11
A20  A21  A22

。。。。。。。。。
AN-10 。。。。。。。。。。。。AN-1 N-1




*/

//#include     <stdio.h>
//#include     <conio.h>
//#include     <stdlib.h>
//#define    N  5
//void fun(int a[][N], int n)   //左下半角元素*n
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0, j = 0; i < 4&&j<4; i++, j++)
//    {
//        a[j][i] *= n;
//        for (i,j; i > 0; i--)
//        {
//            a[j][i - 1] *= n;
//        }
//    }
//}
//
//main()
//{
//    int  a[N][N], n, i, j;
//    FILE* out;
//
//    printf("***** The array *****\n");
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            a[i][j] = rand() % 10;
//            printf("%4d", a[i][j]);
//        }
//        printf("\n");                    //由rand()函数确定数组的值，并输出到屏幕
//    }
//
//    n = rand() % 4;
//    printf("n=%4d\n", n);    //由rand()函数n的值，并输出到屏幕
//
//    fun(a, n);          //调用函数
//
//
//    printf("*****THE  RESULT*****\n");
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//            printf("%4d", a[i][j]);
//        printf("\n");
//    }                        //输出变化后的数组到屏幕
//
//
//
//  /******************************/
//    out = fopen("out.dat", "w");
//    for (i = 0; i < N; i++)
//        for (j = 0; j < N; j++)
//            a[i][j] = i * j + 1;
//    fun(a, 9);
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//            fprintf(out, "%4d", a[i][j]);
//        fprintf(out, "\n");
//    }
//    fclose(out);
//    /******************************/
//}
