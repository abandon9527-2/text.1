#include<stdio.h>
#include<stdlib.h>
typedef struct stu
{
	int a;
	int arr[0];
}stu;
int a = 10;
void add();
int main()
{
	printf("%d", a);
	a += 1;
	add();
	printf("%d", a);
}
void add()
{
	printf("%d", a);
	a += 1;
}