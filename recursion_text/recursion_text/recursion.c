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