#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char a;
    while (scanf("%c", &a))
    {
        getchar();//�ӻ��������ó�\n(�س�)                                          //��Сдת��
        printf("%c\n", a + 32);
    }
    return 0;
}