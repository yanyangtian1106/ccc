#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4,+进行了运算，然后整型提升了变成int，大小为4
	printf("%u\n", sizeof(!c));// 1
	printf("%d\n", sizeof(c));//1
	return 0;
}