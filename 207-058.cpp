#define _CRT_SECURE_NO_WARNINGS 1
/*
��������N��N�Ķ�ά���飬�������������Զ���ֵ�����д����fun(int a[][N]��int n)��
�ú����Ĺ����ǣ�ʹ�������°�����Ԫ���е�ֵ����n�����磬��n��ֵΪ3��a�����е�ֵΪ��

�򷵻��������a�����е�ֵӦΪ��
��
ע�⣺����Դ�������ļ�PROG1.C�С�
����Ķ�����main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣

N*N
A00
A10  A11
A20  A21  A22

������������������
AN-10 ������������������������AN-1 N-1




*/

//#include     <stdio.h>
//#include     <conio.h>
//#include     <stdlib.h>
//#define    N  5
//void fun(int a[][N], int n)   //���°��Ԫ��*n
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
//        printf("\n");                    //��rand()����ȷ�������ֵ�����������Ļ
//    }
//
//    n = rand() % 4;
//    printf("n=%4d\n", n);    //��rand()����n��ֵ�����������Ļ
//
//    fun(a, n);          //���ú���
//
//
//    printf("*****THE  RESULT*****\n");
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//            printf("%4d", a[i][j]);
//        printf("\n");
//    }                        //����仯������鵽��Ļ
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
