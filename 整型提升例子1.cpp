#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4,+���������㣬Ȼ�����������˱��int����СΪ4
	printf("%u\n", sizeof(!c));// 1
	printf("%d\n", sizeof(c));//1
	return 0;
}