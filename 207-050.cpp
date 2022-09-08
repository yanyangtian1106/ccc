//编写函数fun，其功能是：将ss所指字符串中所有下标为奇数位上的字母转换为大写(若该位置上不是字母，则不转换)。
//例如，若输入"abc4EFg"，则应输出"aBc4EFg"。
//注意：部分源程序在文件PROG1.C中。
//请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
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
////{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
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
