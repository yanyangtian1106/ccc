#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <cstdio>
//计算矩阵中值最大的非空子矩阵
int a[55][55];
int main()
{
	int n, m, ans;
	scanf("%d %d", &n, &m);
	ans = -1005;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = k; l < m; l++)
				{
					int tmp = 0;
					for (int p = i; p <= j; p++)
					{
						for (int q = k; q <= l; q++)
						{
							tmp += a[p][q];
						}
					}
					if (tmp > ans)
					{
						ans = tmp;
					}
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}




////把一个矩阵旋转九十度
//int num[205][205];
//int main()
//{
//	int n;
//	int m;
//	scanf("%d", &n);
//	scanf("%d", &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &num[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)//旋转输出
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (j != n - 1)
//			{
//				printf("%d ", num[n - 1 - j][i]);
//			}
//			else
//			{
//				printf("%d\n", num[n - 1 - j][i]);//换行
//			}
//				
//		}
//	}
//	return 0;
//}