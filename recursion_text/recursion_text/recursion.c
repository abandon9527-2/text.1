#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//用递归写出n!
//int recursion(int i)
//{
//	if (i == 0)
//	{
//		return 1;
//	}
//	else
//		return i * recursion(i - 1);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i=recursion(n);
//	printf("%d", i);
//}



//用递归写出你输入数字的每一位
//a%10;
//a=a/10;
//#include<stdio.h>
//void win(int a)
//{
//	//正向写出每一位
//	//if (a >9)
//	//	 win(a / 10);
//	//printf("%d ", a % 10);
//	
//	
//	//逆向写出每一位
//	printf("%d", a%10);
//	if (a > 9)
//	win(a / 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	win(a);
//}


//用递归写出斐波那契数，并思考为什么递归不适用
//if(a==2||a==1),f(x)==1
//if(a>2),f(x)=f(x-1)+f(x-2)
//1.1.2.3.5.8.13.21.
//#include<stdio.h>
//int count = 0;
//int recursion(a)
//{
//
//	if (a == 3)
//		count++;
//	if (a < 3)
//		return 1;
//	if (a > 2)
//		return recursion(a - 1) + recursion(a - 2);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int m=recursion(a);
//	printf("%d\n", count);
//	printf("%d\n", m);
//}

//使用非递归方法来解决这个问题
//#include<stdio.h>
//int recursion(int x)
//{
//	int a, b, c;
//	a = 1;
//	b = 1;
//	c = 0;
//	if (x <= 2)
//	{
//		return 1;
//	}
//		while (x-->2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int m=recursion(a);
//	printf("%d", m);
//}


//求解青蛙跳台阶问题
//模拟青蛙跳台阶问题
//1--------------1种方法 1=1
//2--------------2种方法 2=1+1    2=2
//3--------------3种方法 3=1+2    3=2+1   3=1+1+1
//4--------------5种方法 4=1+2+1  4=2+1+1 4=2+2  4=1+1+2 4=1+1+1+1
//可以清楚看到青蛙跳台阶实际是可以改造成斐波那契数求解
//青蛙起步可以选择一阶或是两阶剩下的就只剩下n-1和n-2的解
//使用非递归方法来解决这个问题
#include<stdio.h>
int recursion(int x)
{
	int a, b, c;
	a = 1;
	b = 2;
	c = 0;
	if (x <= 2)
	{
		return 1;
	}
		while (x-->2)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int m=recursion(a);
	printf("%d", m);
}



//模拟汉诺塔求解
//只有1个盘子的时候A->B   1
//只有2个盘子的时候A->B  A->C  B->C   3
//只有3个盘子的时候A->C  A->B  C->B  A->C  B->A  B->C  A->C   7
//#include<stdio.h>
//void print(char x, char y)
//{
//	printf(" %c->%c ", x, y);
//}
//void hanoi(int n, int star, int temp, int end)
//{
//	if (n == 1)
//		print(star, end);
//	else
//	{
//		hanoi(n - 1, star, end, temp);
//		print(star, end);
//		hanoi(n - 1, temp,star, end);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n,'A','B','C');
//}





//通过操作符，来判断输入数字中1在内存中存储的1的个数



//#include<stdio.h>
//int NumberOf1(int n);
//int main()
//{
//    int m = 0;
//    if ((scanf("%d", &m) != EOF))
//    {
//        printf("%d", NumberOf1(m));
//    }
//}
//int NumberOf1(int n) {
//    int count = 0;
//    while (n)
//    {
//
//        n &= (n - 1);
//        count++;
//    }
//    return count;
//}