#define _CRT_SECURE_NO_WARNINGS 1
//��д����fun���书���ǣ����1~1000֮���ܱ�7��11������������ͬʱ��7��11����������������
//���������a��ָ�������У�ͨ��n������Щ���ĸ�����
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
//{/* ���������ڴ��ļ�������������ݣ�����fun������������ݣ��ر��ļ���*/
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