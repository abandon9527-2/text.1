#define a 10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int cmp_int( void* e1,  void* e2)
{
	//return *(int*)e1 > *(int*)e2 ? 1 : (*(int*)e1 = *(int*)e2 ? 0 : (int) - 1);
if (*(int*)e1 > *(int*)e2)
	return 1;

else if (*(int*)e1 < *(int*)e2)
	return (int)-1;
else
	return 0;
	/*return *(int*)e1 - *(int*)e2;*/
}


int half_search(int arr[], int len)
{
	int left = 0;
	int right = a-1;
	while (right>=left)
	{
		int half = (left + right) / 2;
		if (arr[half] > len)
		{
			right = half-1;
		}
		else if (arr[half] < len)
		{
			left = half+1;
		}
		else
		{
			printf("找到了,下标是%d", half);
			break;
		}
	}
	if (right < left)
	{
		printf("没找到\n");
	}

	//return -1;
}
int main()
{
	int len = 0;
	int arr[a] = { 0 };//变长数组不支持初始化
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
		while (getchar() != '\n');
	}
	qsort(arr,a,sizeof(arr[0]),cmp_int);
	for (int i = 0; i < a; i++)
	{
		printf("%d\n", arr[i]);
	}
	//实现二分查找
	printf("请输入你想找的数字>:");
	scanf("%d", &len);
	while (getchar() != '\n');
	half_search(arr, len);
}