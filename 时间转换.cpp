#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int seconds;
    int fen;
    int shi;
    int miao;                                         //ʱ��ת����ȡģ��Ӧ�ã�
    scanf("%d", &seconds);
    shi = seconds / 3600;
    fen = (seconds % 3600) / 60;
    miao = (seconds % 3600) % 60;
    printf("%d %d %d", shi, fen, miao);
    return 0;
}