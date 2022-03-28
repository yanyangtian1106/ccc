#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int x = 0;
    int n = 0;
    scanf("%d %d", &x, &n);
    if (x + n <= 7)
    {
        printf("%d", x + n);
    }
    else if (((x + n) % 7) == 0)
    {
        printf("7");
    }
    else
    {
        printf("%d", (x + n) % 7);
    }

    return 0;
}