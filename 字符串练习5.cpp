#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <cstdio>

char s[10005];
int main()
{
	int len;
	scanf("%s", & s);
	len = strlen(s);
	if ((s[len - 1] - '0') % 2 == 0)//s�����ַ����ͣ�Ҫ��ȥ����0������ת�������ͽ��м���
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}





//char s[1005];
//int main()
//{
//	int len;
//	scanf("%s", &s);
//	len = strlen(s);
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == 'z')
//		{
//			s[i]='a'
//		}
//		else if (s[i] == 'Z')
//		{
//			s[i] = 'A';
//		}
//		else if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
//		{
//			s[i]++;
//		}
//	}
//	printf("$s\n", s);        
//	return 0;
//}