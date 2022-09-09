//规定输入的字符串中只包含字母和* 号。请编写函数fun，其功能是：将字符串尾部的* 号全部删除，前面和中间的* 号不动。
//例如，字符串中的内容为："****A*BC*DEF*G*******"，删除后，字符串中的内容应当是："****A*BC*DEF*G"。在编写函数时，不得使用C语言提供的字符串函数。
//注意：部分源程序在文件PROG1.C中。
//请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入你编写的若干语句。
//
//分析：从后往前扫描数组，是 * 改为0，不是 * 结束循环
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void  fun(char* a)
{
    int i;
    for (i = 1; a[i] != '\0'; i++)
    {
        ;
    }
    for (i; i >= 0; i--)
    {
        a[i] = '\0';
        if (a[i - 1] != '*')
        {
            break;
        }

    }

}

int main()
{
    char  s[81]; void NONO();
    printf("Enter a string:\n"); gets(s);
    fun(s);
    printf("The string after deleted:\n"); puts(s);
    NONO();
}
void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE* in, * out;
    int i; char s[81];
    in = fopen("in.dat", "r");
    out = fopen("out.dat", "w");
    for (i = 0; i < 10; i++) {
        fscanf(in, "%s", s);
        fun(s);
        fprintf(out, "%s\n", s);
    }
    fclose(in);
    fclose(out);
}
