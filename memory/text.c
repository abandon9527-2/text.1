#include"text.h"
//memcpy��ģ��ʹ��(�������ص������)
void* my_memcpy(void* arr, void* arr1, size_t count)
{
	assert(arr && arr1);
	while (count--)
	{
		*((char*)arr + count) = *((char*)arr1 + count);
	}
	return arr;
}
void text1()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 ,9,10};
	int arr[20] = { 0 };
	//memcpy(arr1, arr1 + 2, 5 * sizeof(arr[0]));
	my_memcpy(arr1, arr1+2, 5 * sizeof(arr[0]));
}
void* my_memove(void* des, void* str, size_t count)//�������ظ��Ͳ��ظ�
{
	size_t star = count;
	assert(des && str);
	if (des > str)
	{
		while (count--)//�Ӻ���ǰ
		{
			*((char*)des + count) = *((char*)str + count);
		}
	}
	else//��ǰ���
	{
		while (count--)
		{
			*((char*)des - count + star-1) = *((char*)str - count + star-1);
			//*((char*)des) = *((char*)str);
			//((char*)des)++;
			//((char*)str)++;
		}
	}
	return des;
}
void text2()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//memmove(arr1, arr1 + 2, 5 * sizeof(arr1[0]));
	my_memove(arr1, arr1+2, 5 * sizeof(arr1[0]));
}
void text3()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr1, 0, 40);
}
void text4()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 1,2,3,4,6 };
	int a = memcmp(arr1, arr2, 20);
}
int main()
{
	// text1();//memcpy��ģ���ʹ��
	//text2();//memove��ģ���ʹ��
	//text3();//memsetʹ��
	text4();
}


