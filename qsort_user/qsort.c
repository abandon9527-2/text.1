#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e2 - *(int*)e1;
}
void text1()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmm_float(const void* e1, const* e2)
{
	return *(float*)e2 > *(float*)e1;
}
void text2()
{
	float arr[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	printf("\n");
	qsort(arr, sz, sizeof(arr[0]), cmm_float);
	for (int i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	printf("\n");
}
typedef struct stu
{
	char name[100];
	int age;
}stu;
int cmp_stu_age(void* e1, void* e2)
{
	/*return ((stu*)e2)->age - ((stu*)e1)->age;*/
	return (*(stu*)e2).age - (*(stu*)e1).age;
}
int cmp_stu_name(void* e1, void* e2)
{
	return strcmp((*(stu*)e2).name, (*(stu*)e1).name);
}
void text3()
{
	stu s1[3] = { {"liming",32},{"wangqiang",35}, {"zhangming",33} };
	int sz = sizeof(s1) / sizeof(s1[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", s1[i].name);
		printf("%d " , s1[i].age);
	}
	printf("\n");
	qsort(s1, sz, sizeof(s1[0]), cmp_stu_age);
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", s1[i].name);
		printf("%d ", s1[i].age);
	}
	printf("\n");
	qsort(s1, sz, sizeof(s1[0]), cmp_stu_name);
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