#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	scanf("%d", &num);
	//统计num补码中有多少个1
	//while (num)//这种算法不能求负数
	//{
	//	if (num % 2 == 1)                //比如说5的二进制是110，%2变成10，再除2=1，count就=2了
	//	{
	//		count++;
	//	}
	//	num=num / 2;
	//}
	//00000000000000000000000000000011
	//00000000000000000000000000000001
	//00000000000000000000000000000001
	//如果该数与1按位与&如果最后一位是1那么按位与出来的就是1，如果最后一位是0，那么按位与出来的就是0
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
