#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//Ñ°ÕÒÏàÍ¬×Ö·û´®
int main()
{
	char s1[1005];
	char s2[1005];
	fgets(s1, 1004, stdin);
	fgets(s2, 1004, stdin);
	int len1 = strlen(s1) - 1;
	int len2 = strlen(s2) - 1;
	int ans = 0;
	for (int i = 0; i + len2 - 1 < len1; i++)
	{
		bool matched = true;
		for (int j = 0; j < len2; j++)
		{
			if (s1[i + j] != s2[j])
			{
				matched = false;
				break;
			}
		}
		if (matched)
		{
			ans++;
		}

	}
	printf("%d\n", ans);
	return 0;
}




////¶Ô³Æ×Ö·û´®
//	char res[5000];
//int main()
//{
//
//	int n;
//	scanf("%d", &n);
//	int len = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		strcat(res + len + 1, res);
//		res[len] = 'A' + i - 1;
//		len = strlen(res);
//	}
//	printf("%s\n", res);
//	return 0;
//}




//int main()
//{
//	int n;
//	int m;
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			printf("+-");
//		}
//		printf("+\n");
//		for (int j = 1; j <= m; j++)
//		{
//			printf("|*");
//		}
//		printf("|\n");
//	}
//	for (int j = 1; j <= m; j++)
//	{
//		printf("+-");
//	}
//	printf("+");
//	return 0;
//}