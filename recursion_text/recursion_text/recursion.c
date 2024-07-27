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