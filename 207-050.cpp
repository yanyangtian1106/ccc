//��д����fun���书���ǣ���ss��ָ�ַ����������±�Ϊ����λ�ϵ���ĸת��Ϊ��д(����λ���ϲ�����ĸ����ת��)��
//���磬������"abc4EFg"����Ӧ���"aBc4EFg"��
//ע�⣺����Դ�������ļ�PROG1.C�С�
//����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//void  fun(char ss[])
//{
//    int i = 0;
//    for ( i = 0; ss[i] != '\0'; i++)
//    {
//        if (ss[i] >= 'a' && ss[i] <= 'z')
//        {
//              if (i % 2 != 0||i==0)
//             {
//                  ss[i] -= 32;
//             }
//        }
//
//    }
//
//
//}
//
//int main()
//{
//    char tt[81];
//    //void NONO();
//    printf("\nPlease enter an string within 80 characters:\n");/* gets(tt);*/
//    printf("\n\nAfter changing, the string\n  \"%s\"", tt);
//    fun(tt);
//    printf("\nbecomes\n  \"%s\"\n", tt);
// /*   NONO();*/
//}
//
////void NONO()
////{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
////    FILE* fp, * wf;
////    char tt[81];
////    int i;
////
////    fp = fopen("in.dat", "r");
////    wf = fopen("out.dat", "w");
////    for (i = 0; i < 10; i++) {
////        fscanf(fp, "%s", tt);
////        fun(tt);
////        fprintf(wf, "%s\n", tt);
////    }
////    fclose(fp);
////    fclose(wf);
////}
