#define _CRT_SECURE_NO_WARNINGS

//对冒泡函数的实现
//#include<stdio.h>
//void bubbles_sort(int arr[], int sz)
//{
//	for (int j = 0; j < sz-1; j++)
//	{
//		for (int i = 0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int temp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = temp;
//			}
//	}
//	}
//}
//int main()
//{
//	//实现冒泡排序
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubbles_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//qsort的练习使用
#include<stdio.h>
#include<stdlib.h>
struct a1
{
	char name[20];
	int age;
};
int cmp_int(void* e1, void* e2)
{
	return *(int*)e2 - *(int*)e1;
}
int cmp_float(void* e1, void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}
int cmp_struct(const void* e1, const void* e2)
{
	return ((struct a1*)e1)->age - ((struct a1*)e2)->age;
}

int main()
{
	//qsort实现冒泡排序
	//int arr[] = { 1,2,3,4,5,6,7,9,8,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	////qsort(函数首地址，数组长度，数组元素长度，比较的函数)
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	



	//qsort实现flort的冒泡函数
	//float arr[] = { 1.0,2.0,3.0,4.0,5.0,6.0,9.0,10.0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_float);
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%f\n", arr[i]);
	//}




	//qsort实现struct结构体的排序
	struct a1 n[3] = { {"liming",5},{"wangqiang",10},{"zhangfang",8}};
	int sz = sizeof(n) / sizeof(n[0]);
	qsort(n, sz, sizeof(n[0]), cmp_struct);
	for (int i = 0; i < 3; i++)
	{
		printf("%d", ( & n[i])->age);
	}
}
