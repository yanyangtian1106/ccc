#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    for (a = 0; n >= 12; a++)
    {
        n = n - 12;
    }
    printf("%d", 4 * a + 2);
    return 0;
}