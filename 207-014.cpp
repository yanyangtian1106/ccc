//�涨������ַ�����ֻ������ĸ��* �š����д����fun���书���ǣ����ַ���β����* ��ȫ��ɾ����ǰ����м��* �Ų�����
//���磬�ַ����е�����Ϊ��"****A*BC*DEF*G*******"��ɾ�����ַ����е�����Ӧ���ǣ�"****A*BC*DEF*G"���ڱ�д����ʱ������ʹ��C�����ṩ���ַ���������
//ע�⣺����Դ�������ļ�PROG1.C�С�
//����Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ��������������д��������䡣
//
//�������Ӻ���ǰɨ�����飬�� * ��Ϊ0������ * ����ѭ��
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
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
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
