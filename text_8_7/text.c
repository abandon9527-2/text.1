#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3.4,5,6,7,8,9,10,11,12 };
	int m=sizeof(*(arr + 1));
	printf("%d", m);
}