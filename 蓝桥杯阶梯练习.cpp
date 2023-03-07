#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <cstdio>
int ans;
int score[] = { 0,1,2,1,1,1,1,5,5,4,-1,-1,-2,-3,-1,-9 };
void dfs(int x, int pos, int sum)
{
	if (x <= 6)
	{
		if (pos < 15)
			return;
		if (pos == 15)
		{
			if (ans > sum)
			{
				ans = ans;
			}
			else
			{
				ans = sum;
			}
			return;
		}

	}
	for (int i = 1; i <= 4; i++)
	{
		if (pos > 15)
			return;
		dfs(x + 1, pos + 1, sum + score[pos + 1]);
	}
}
int main()
{
	dfs(0, 0, 0);
	printf("%d\n", ans);
	return 0;
}