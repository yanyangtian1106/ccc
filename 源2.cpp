#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char a;
    while (scanf("%c", &a))
    {
        getchar();//从缓冲区中拿出\n(回车)                                          //大小写转换
        printf("%c\n", a + 32);
    }
    return 0;
}