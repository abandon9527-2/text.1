#define  _CRT_SECURE_NO_WARNINGS

//通过指针数组实现计算器
#include<stdio.h>
int add(int x, int y)//实现加法
{
	return x + y;
}

int sub(int x,int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}
int main()
{
	int (*p0)(int, int) = &add;
	int (*p1)(int, int) = &sub;
	int (*p2)(int, int) = &mul;
	int (*p3)(int, int) = &div;
	int (*arr[4])(int,int) = {p0,p1,p2,p3};
	int a = 0,x,y;
	/*printf("%d\n", arr[0](1, 2));
	printf("%d\n", p0(1,2));*/

	while (printf("请输入你需要的算法"), ~scanf("%d", &a))
	{
		printf("请输入你需要的两个数字：");
		scanf("%d%d", &x, &y);
		switch (a)
		{
		case 1:
			printf("%d\n", arr[0](x, y));
			break;
		case 2:
			printf("%d\n", arr[1](x, y));
			break;
		case 3:
			printf("%d\n", arr[2](x, y));
				break; 
		case 4:
			printf("%d\n", arr[3](x, y));
				break;
		default:
			printf("输入算法错误\n");
			break;
		}
	}
}