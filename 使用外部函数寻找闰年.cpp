#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	else
		return 0;                                                //用外部函数寻找闰年
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == leap_year(year))
		{
			printf("%d\n", year);
		}
	}
	return 0;
}