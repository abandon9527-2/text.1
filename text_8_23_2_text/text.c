
//#include<stdio.h>
//void bubble_sort(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz-1 - i; j++)
//		{
//			if (arr[j+1] > arr[j ])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j +1];
//				arr[j +1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int a = 0; a < sz; a++)
//	{
//		printf("%d", arr[a]);
//	}
//	printf("\n");
//	bubble_sort(arr,sz);
//	for (int a = 0; a < sz; a++)
//	{
//		printf("%d", arr[a]);
//	}
//}

//
//#include<stdio.h>
//int main()
//{
//	for (int a = 5; a ; a--)
//		printf("0");
//
//}
//int main()
//{
//	int a = 5;
//	while(a)
//	{
//		a--;
//		printf("0 ");
//	}
//	printf("\n");
//	printf("***************************\n");
//	a = 5;
//	do {
//		a--;
//		printf("0 ");
//	} while (a);
//}


//学习完快慢指针进行排序

#include<stdio.h>
#include<stdlib.h>
int**CreatArry(int x, int y)
{
    int** ret = (int**)malloc(sizeof(int*) * x);
    if (ret == NULL)
    {
        exit(1);
    }
    for (int a = 0; a < x; a++)
        ret[a] = (int*)calloc(y, sizeof(int));
    for (int j = 0; j < x; j++)
    {
        for (int i = 0; i < y; i++)
        {
            scanf_s("%d", &ret[j][i]);
        }
    }
    return ret;
}
//void bubble_sort(int** arr, int m, int n)
//{
//    for (int i = 0; i < m; i++)
//    {
//        for (int k = 0; k < n - 1 ; k++)
//  
//        {
//            for (int j = 0; j < n - 1-k; j++)
//            {
//                if (arr[i][j] < arr[i][j + 1])
//                {
//                    int temp = arr[i][j];
//                    arr[i][j] = arr[i][j + 1];
//                    arr[i][j + 1] = temp;
//                }
//            }
//            if (i+1<m&&arr[i][n-1] < arr[i + 1][0])
//            {
//                int temp = arr[i][n-1];
//                arr[i][n-1] = arr[i + 1][0];
//                arr[i + 1][0] = temp;
//            }
//        }
//    }
//
//}
//2    5
//1 2 3 4 5
//6 7 8 9 0
int by_int(void*s1,void*s2)
{
    return *(int*)s1 - *(int*)s2;
}
int main()
{
    int m, n;
    scanf_s("%d%d", &m, &n);
    int** arr = CreatArry(m, n);
    qsort(arr, m*n, sizeof(int),by_int);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
        }
    }
    free(arr);
    arr = NULL;
}