#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//�õݹ�д��n!
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



//�õݹ�д�����������ֵ�ÿһλ
//a%10;
//a=a/10;
//#include<stdio.h>
//void win(int a)
//{
//	//����д��ÿһλ
//	//if (a >9)
//	//	 win(a / 10);
//	//printf("%d ", a % 10);
//	
//	
//	//����д��ÿһλ
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


//�õݹ�д��쳲�����������˼��Ϊʲô�ݹ鲻����
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

//ʹ�÷ǵݹ鷽��������������
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


//���������̨������
//ģ��������̨������
//1--------------1�ַ��� 1=1
//2--------------2�ַ��� 2=1+1    2=2
//3--------------3�ַ��� 3=1+2    3=2+1   3=1+1+1
//4--------------5�ַ��� 4=1+2+1  4=2+1+1 4=2+2  4=1+1+2 4=1+1+1+1
//�����������������̨��ʵ���ǿ��Ը����쳲����������
//�����𲽿���ѡ��һ�׻�������ʣ�µľ�ֻʣ��n-1��n-2�Ľ�
//ʹ�÷ǵݹ鷽��������������
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



//ģ�⺺ŵ�����
//ֻ��1�����ӵ�ʱ��A->B   1
//ֻ��2�����ӵ�ʱ��A->B  A->C  B->C   3
//ֻ��3�����ӵ�ʱ��A->C  A->B  C->B  A->C  B->A  B->C  A->C   7
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





//ͨ�������������ж�����������1���ڴ��д洢��1�ĸ���



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