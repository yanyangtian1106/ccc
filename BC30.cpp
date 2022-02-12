#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n;
    int h;
    int m;
    int d;
    scanf("%d %d %d", &n, &h, &m);
    d = m / h;
    if (m % h != 0)
    {
        d = d + 1;
    }
    printf("%d", n - d);
    return 0;
}