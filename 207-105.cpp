#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
//void NONO();
//double fun(double  a[], int  n)
// {
//    int i;
//    for (i = 0; i < n-1; i++)
//    {
//        if (a[i + 1] > a[0])
//        {
//            double m = a[i + 1];
//            a[i + 1] = a[0];
//            a[0] = m;
//        }
//    }
//    a[0] = 0;
//    for (i = 1; i < n-1; i++)
//    {
//        if (a[i + 1] < a[1])
//        {
//            double m = a[i + 1];
//            a[i + 1] = a[1];
//            a[1] = m;
//        }
//    }
//    a[1] = 0;
//    double c = 0;
//    for(i = 2; i < n; i++)
//    {
//        c += a[i];
//    }
//    return c/8;
//}
//
//int main()
//{
//    double  b[10], r;
//    int  i;
//    printf("输入10个分数放入b数组中 :  ");
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%lf", &b[i]);
//    }
//    printf("输入的10个分数是 :  ");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%4.1lf ", b[i]);
//    }
//    printf("\n");
//    r = fun(b, 10);
//    printf("去掉最高分和最低分后的平均分 :  %f\n", r);
//    NONO();
//}
//
//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//  FILE *fp, *wf ;
//  int i, j ;
//  double b[10], r ;
//
//  fp = fopen("in.dat","r") ;
//  wf = fopen("out.dat","w") ;
//  for(i = 0 ; i < 10 ; i++) {
//    for(j = 0 ; j < 10 ; j++) {
//      fscanf(fp, "%lf ", &b[j]) ;
//    }
//    r = fun(b, 10) ;
//    fprintf(wf, "%f\n", r) ;
//  }
//  fclose(fp) ;
//  fclose(wf) ;
//}