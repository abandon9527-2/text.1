//#include<stdio.h>
//#include<math.h>
//int main()
//{
//
//	for (int i = 1; i < 10000; i++)
//	{
//		int n = 0;
//		int j = i;
//		int k = i;
//		int count = 0;
//		while (k)
//		{
//			k = k/ 10;
//			count++;
//		}
//		while (j )
//		{
//			int m = j % 10;
//			j = j / 10;
//			n =pow(m,count) + n;
//		}
//		if (n == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//void cmp(int* m)
//{
//	int a = 20;
//	m = &a;
//}
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	cmp(p);
//	printf("%d", *p);
//}
//#include <stdio.h>
//void print(int a)
//{
//    if (a >= 2 || a <= 20)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (j == a - i || j == i)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//}
//int main() {
//    int a, b;
//    while (scanf_s("%d", &a) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        print(a);
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int arr[10];
//    int i = 0;
//    float m = 0;
//    while (i < 10)
//    {
//        scanf_s("%d", &arr[i]);
//        i++;
//    }
//    i = 0;
//    while (i < 10)
//    {
//        m = m + arr[i];
//        i++;
//    }
//    m = m / 10;
//    printf("%f", m);
//    return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int brr[] = { 9,8,7,6,5,4,3,2,1 };
//	//两个数组一样大
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int temp = arr[i];
//		arr[i] = brr[i];
//		brr[i] = temp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", brr[i]);
//	}
//	printf("\n");
//}
//#include<stdio.h>
//int TF(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0 )
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int count = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (TF(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}
#include<stdio.h>
int mmuer(int a, int b)
{
	int c = b;
	while (a%b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int a, b;
	while (~scanf_s("%d%d", &a, &b))
	{
		int n = mmuer(a, b);
		printf("%d", n);
	}
}