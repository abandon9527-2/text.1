#include"Heap.h"


//void AdjustUp(Heap*ps,int n)
//{
//	while (n)
//	{
//		swap(&ps->arr[0], &ps->arr[n]);
//		UNdate(ps, n);
//		n = n - 1;
//	}
//}

void AdjustUN(Heap* ps, int n)
{
	int i = (n - 1) / 2;
	while (i>=0)
	{
		UNdate(ps, i, n);
		i--;
	}
	int end = n - 1;
	while (end)
	{
		swap(&ps->arr[0], &ps->arr[end]);
		UNdate(ps, 0, end);
		end--;
	}
}
int main()
{
	Heap S1;
	HeapInit(&S1);
	int arr[6] = { 17,20,10,13,19,15 };
	//向下调整时间算法建堆
	
	int a = 0;
	while (a < 6)
	{
		HeapPush(&S1, arr[a]);
		a++;
	}
	AdjustUN(&S1, S1.size);
	//AdjustUp(&S1,S1.size-1);
}