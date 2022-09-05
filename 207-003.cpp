#define _CRT_SECURE_NO_WARNINGS 1
//编写函数fun，其功能是：求出1~1000之间能被7或11整除，但不能同时被7和11整除的所有整数，
//并将其放在a所指的数组中，通过n返回这些数的个数。
//void  fun(int aa[], int* n)
//{
//    int i;
//    int k=0;
//    for (i = 0; i < 1000; i++)
//    {
//        if ((i % 7 == 0 || i % 11 == 0) && i % 77 != 0)
//        {  
//           aa[k] = i;
//           k++;
//           *n+=1; 
//           
//        }
//    }
//}
//#include <stdio.h>
//int main()
//{
//    int aa[1000];
//    int n=0;
//    int k=0;
//    /*void NONO (  );*/
//
//    fun(aa, &n);
//    printf("%d\n",n);
//    for (k = 0; k < n; k++)
//    {
//        if (aa[k] == '\0')
//        {
//            k++;
//        }
//        else
//            printf("%d ", aa[k]);
//    }
//    /*NONO( );*/
//}

//void NONO ( )
//{/* 本函数用于打开文件，输入测试数据，调用fun函数，输出数据，关闭文件。*/
//  int aa[1000], n, k ;
//  FILE *fp ;
//
//  fp = fopen("out.dat","w") ;
//  fun ( aa, &n ) ;
//  for ( k = 0 ; k < n ; k++ )
//    if((k + 1) % 10 == 0) fprintf(fp, "\n") ;
//    else fprintf(fp, "%5d", aa[k]) ;
//  fclose(fp) ;
//}