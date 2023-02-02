#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <cstdio>
//查找最长名字
char ans[105];
char s[105];
int anslen;
int main()
{
	int N;
	int len;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", &s);
		len = strlen(s);
		if (len > anslen)
		{
			anslen = len;
			strcpy(ans, s);
		}
	}
	printf("%s\n", ans);
	return 0;
}