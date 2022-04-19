#define _CRT_SECURE_NO_WARNINGS 1
//隐式转换类型
int main()
{
	char a = 3;
	//a实际二进制序列为00000000000000000000000000000011
	//但是char会截断成00000011
	char b = 127;
	//b实际二进制序列为00000000000000000000000001111111
	//但是char会截断为01111111
	char c = a + b;
	//a和b如何相加？
	//00000011---a
	//01111111---b
	//10000010---c
	//因为打印整型所以要补符号位-整型提升，如果有符号位就按照符号位来补无符号按0
	//111111111111111111111111111111111111111110000010----补码
	//111111111111111111111111111111111111111110000001----反码
	//100000000000000000000000000000000000000001111110----原码
	//打印原码得到-126
	printf("%d", c);
	return 0;
}