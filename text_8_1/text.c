#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void oppo(int a)
{
	for (int i = 0; i < 32; i++)
		printf("%d", (a & 1 << 31 - i) != 0 ? 1 : 0);
}
int main()
{
	int a = 5;
	scanf("%d", &a);
	oppo(a);	//转二进制
	//把a的第32位变成1
	printf("\n");
	a |= 1 << 31;
	oppo(a);
	printf("\n");
	//把a的32位变成0
	a &= ~(1 << 31);
	oppo(a);
	printf("\n");
}