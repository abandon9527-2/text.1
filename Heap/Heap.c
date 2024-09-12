#include"Heap.h"

void HeapInit(Heap* ps)
{
	ps->capacity = ps->size = 0;
	ps->arr = NULL;
}

void newcapacity(Heap* ps)
{
	int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
	HPDatetype* pcur = (HPDatetype*)realloc(ps->arr, sizeof(HPDatetype) * newcapacity);
	if (pcur == NULL)
	{
		exit(1);
	}
	ps->arr = pcur;
	ps->capacity = newcapacity;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void UpDate(Heap* ps)
{
	int child = ps->size - 1;
	while (child>0)
	{
		int father = (child-1) / 2;
		if (ps->arr[child] < ps->arr[father])
		{
			swap(&ps->arr[child], &ps->arr[father]);
			child = father;
		}
		else {
			break;
		}
	}
}

void HeapPush(Heap* ps, HPDatetype x)
{
	if (ps->capacity == ps->size)
	{
		newcapacity(ps);
	}
	ps->arr[ps->size++] = x;
	UpDate(ps);
}

void UNdate(Heap* ps)
{
	int parent = 0;
	int child = parent * 2+1;
	while (child<ps->size)
	{
		
		if (child+1<ps->size&&ps->arr[child] > ps->arr[child + 1])
		{
			child = child + 1;
		}
		if (ps->arr[child] > ps->arr[parent])
		{
			break;
		}
		else
		{
			swap(&ps->arr[parent], &ps->arr[child]);

		}
		parent = child;
		child = parent * 2 + 1;
	}
}

void HeapPop(Heap* ps)
{
	swap(&ps->arr[0], &ps->arr[ps->size - 1]);
	ps->size--;
	UNdate(ps);
}

HPDatetype HeapTop(Heap* ps)
{
	assert(ps && ps->size);
	return ps->arr[0];
}

bool HeapEmpty(Heap* ps)
{
	if (ps->size == 0)
	{
		return true;
	}
	return false;
}

void HeapDestory(Heap* ps)
{
	free(ps->arr);
	ps->arr = NULL;
}