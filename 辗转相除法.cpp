#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    //求最大公约数
    long long max = 0;
    long long min = 0;
    long long tmp = 0;
    //先将n和m进行保存，防止下面使用辗转相除的方法影响n和m的值
    long long a = n;
    long long b = m;

    //辗转相除法求最小公倍数和最大公因数
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    max = m;//最小公倍数=n*m/max
    min = a * b / max;
    printf("%lld", min + max);
    return 0;
}