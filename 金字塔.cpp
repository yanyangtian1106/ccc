#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;
    }
    return 0;
}