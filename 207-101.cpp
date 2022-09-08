//请编写函数fun，其功能是：统计s所指字符串中的数字字符个数，并作为函数值返回。
//例如，s所指字符串中的内容是：2def35adh25  3kjsdf 7 / kj8655x,
//函数fun返回值为：11
//注意：部分源程序在文件PROG1.C文件中。
//请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include  <stdio.h>
//void NONO();
//int fun(char  s[])
//{
//    int num=0;
//    for (int i = 0; s[i] != 0; i++)
//    {
//
//        if (s[i] >= '0' && s[i] <= '9')
//            num++;
//    }
//    return num;
//
//}
//
//int main()
//{
//    char s[] = "2def35adh25  3kjsdf 7/kj8655x";
//    printf("%s\n", s);
//    printf("%d\n", fun(s));
// /*   NONO();*/
//}

//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    FILE* fp, * wf;
//    int i;
//    char s[256];
//
//    fp = fopen("in.dat", "r");
//    wf = fopen("out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        fgets(s, 255, fp);
//        fprintf(wf, "%d\n", fun(s));
//    }
//    fclose(fp);
//    fclose(wf);
//}
