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
	oppo(a);	//ת������
	//��a�ĵ�32λ���1
	printf("\n");
	a |= 1 << 31;
	oppo(a);
	printf("\n");
	//��a��32λ���0
	a &= ~(1 << 31);
	oppo(a);
	printf("\n");
}