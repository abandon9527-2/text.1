#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stu
{
	char name[100];
	int age;
}stu;

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
}

int cmm_float(const void* e1, const* e2)
{
	return *(float*)e2 > *(float*)e1;
}

int cmp_stu_age(void* e1, void* e2)
{
	/*return ((stu*)e2)->age - ((stu*)e1)->age;*/
	return (*(stu*)e2).age - (*(stu*)e1).age;
}

int cmp_stu_name(void* e1, void* e2)
{
	return strcmp((*(stu*)e2).name, (*(stu*)e1).name);
}
void swap(char* e1, char* e2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++;
	}
}

void my_qsort(void* arr, int sz, int width, int scmp(void* e1, void* e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (scmp((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
				swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
		}
	}
}
void text1()
{
	int arr[] = { 1,2,3,6,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void text2()
{
	float arr[] = { 2.0,1.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	printf("\n");
	my_qsort(arr, sz, sizeof(arr[0]), cmm_float);
	for (int i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	printf("\n");
}

void text3()
{
	stu s1[3] = { {"liming",32},{"wangqiang",35}, {"zhangming",33} };
	int sz = sizeof(s1) / sizeof(s1[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", s1[i].name);
		printf("%d ", s1[i].age);
	}
	printf("\n");
	my_qsort(s1, sz, sizeof(s1[0]), cmp_stu_age);
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", s1[i].name);
		printf("%d ", s1[i].age);
	}
	printf("\n");
	my_qsort(s1, sz, sizeof(s1[0]), cmp_stu_name);
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", s1[i].name);
		printf("%d ", s1[i].age);
	}
	printf("\n");
}

int main()
{
	text1();
	text2();
	text3();
	//text4();
}