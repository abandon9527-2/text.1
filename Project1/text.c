//#include<stdio.h>
//int main()
//{//int *arr[]={&a,&b,&c};
//	//int (*p)[]=&a;
//	/*写一个函数打印arr数组的内容，不使用数组下标，使用指针。*/
//	/*	arr是一个整形一维数组。*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//1
//	int* p = &arr[0];
//	for (int a = 0; a < 10; a++)
//	{
//		printf("%d ", *(p + a));
//	}
//	printf("\n");
//	int (*m)[10] = &arr;
//	for (int a = 0; a < 10; a++)
//	{
//		printf("%d ", *(*m+a));
//	}
//	//int a, b, c;
//	//int* ppn[5] = { &a,&b,&c };
//	//int* (*pp)[] = &ppn;
//	int(*ppn)[10][3] = { &m };
//	for (int a = 0; a < 10; a++)
//	{
//		printf("%d ", );
//	}
//	return 0;
//}
#include<stdio.h>

int main()
{
	//int a, b, c;
	//int arr1[] = { 1,2,3 };
	//int arr2[] = { 1,2,3 };
	//int arr3[] = { 1,2,3 };
	//int(*p)[3] = &arr1;//数组指针

	//int* p1[3] = { arr1,arr2,arr3 };//模拟二级数组
	//int* arr[3] = { &a,&c,&b };//指针数组
	//

	//int* arr[3] = { &a,&c,&b };//指针数组
	//int* (*p2)[3] = &arr;

	////打印一维数组
	//int arr[5];//*(arr+5)
	////打印二维数组
	//int arr[5][6];//int (*(arr+0))[6]模拟一维数组
	////int (*arr)[6],所以是一维数组的数组指针
	////int *((*arr)+i)//模拟二维数组的首元素打印
	////[]===*(数组名+i)
	//// 
	//
	////数组 int arr[]; arr是一个数组，它有3个元素，每个元素的类型 int(*)[3]
	//int (*arr[3])[3]={&arr1,&arr2,&arr3};

	//int* (*arr[1])[3]  = ;   //arr1={&a,&b,&c};  arr是一个数组，有一个元素，这个元素的类型是 int*(*)[3],数组指针，指向3个元素，每个元素类型是int*
	//
}