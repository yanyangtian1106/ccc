#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char a;
    a = getchar();
    if (a >= 'A' & a <= 'z')
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}