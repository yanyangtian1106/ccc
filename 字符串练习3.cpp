#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <cstdio>
//计算纪念日
int mm[10] = { 1,5,10,10,10,12 };
int dd[10] = { 1,1,1,2,3,25 };
int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
void nextday(int& y, int& m, int& d)
{
	d++;
	if (d == day[m] + 1)
	{
		d = 1;
		m++;
	}
}
int main()
{
	int y, w, m, d, sf, ans;
	scanf("%d", &y);
	for (int i = 6; i <= 9; i++)
	{
		scanf("%d%d", &mm[i], &dd[i]);
	}
	scanf("%d", &w);
	if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)//判断闰年
	{
		day[2]++;
	}
	m = 1;
	d = 1;
	sf = 0;
	ans = 0;
	while (m < 13)
	{
		if (m == mm[6] && d == dd[6])
		{
			ans++;
			sf = 2;
		}
		else if (sf)
		{
			ans++;
			sf--;
		}
		else if (w == 6 || w == 7)
		{
			ans++;
		}
		else
		{
			for (int i = 1; i <= 10; i++)
			{
				if (m == mm[i] && d == dd[i])
				{
					ans++;
					break;
				}
			}
		}
		nextday(y, m, d);
		w++;
		if (w == 8)
		{
			w = 1;
		}
	}
	printf("%d\n", ans);
	return 0;
}





////计算纪念日
//int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//int main()
//{
//	int y;//年
//	int m;//月
//	int d;//日
//	int k;//多少天纪念日 
//	scanf("%d%d%d%d", &y, &m, &d, &k);
//   	for (int i = 1; i <= k; i++)
//	{
//		if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)//判断闰年
//		{
//			day[2] = 28;
//		}
//		else
//		{
//			day[2] = 28;
//		}
//		d++;
//		if (d == day[m]+1)
//		{
//			d = 1;
//			m++;	
//		}
//		if (m == 13)
//		{
//			m = 1;
//			y++;
//		}
//
//	}
//	printf("%04d-%02d-%02d", y, m, d);
//	return 0;
//}




////寻找相同字符串
//int main()
//{
//	char s1[1005];
//	char s2[1005];
//	fgets(s1, 1004, stdin);
//	fgets(s2, 1004, stdin);
//	int len1 = strlen(s1) - 1;
//	int len2 = strlen(s2) - 1;
//	int ans = 0;
//	for (int i = 0; i + len2 - 1 < len1; i++)
//	{
//		bool matched = true;
//		for (int j = 0; j < len2; j++)
//		{
//			if (s1[i + j] != s2[j])
//			{
//				matched = false;
//				break; 
//			}
//		}
//		if (matched)
//		{
//			ans++;
//		}
//
//	} 
//	printf("%d\n", ans);
//	return 0;
//}