#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    //�����Լ��
    long long max = 0;
    long long min = 0;
    long long tmp = 0;
    //�Ƚ�n��m���б��棬��ֹ����ʹ��շת����ķ���Ӱ��n��m��ֵ
    long long a = n;
    long long b = m;

    //շת���������С���������������
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    max = m;//��С������=n*m/max
    min = a * b / max;
    printf("%lld", min + max);
    return 0;
}