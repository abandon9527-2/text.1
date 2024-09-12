#include"Heap.h"

int main()
{
	Heap s1;
	HeapInit(&s1);
	int arr[6] = { 12,55,63,11,27,99 };
	int a = 0;
	while (a < 6)
	{
		HeapPush(&s1, arr[a]);
		a++;
	}
	HeapPop(&s1);
	while (!HeapEmpty(&s1))
	{
		printf("%d\n", HeapTop(&s1));
		HeapPop(&s1);
	}
	HeapDestory(&s1);
}