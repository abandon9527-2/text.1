#include"heap.h"
void HPInit(HP* php)
{
	assert(php);
	php->arr = NULL;
	php->capacity = php->size = 0;
}

void HPDesTory(HP* php)
{
	if(php->arr)
	   free(php->arr);
	php->arr = NULL;
	php->capacity = php->size = 0;
}
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void AdjustUp(HPDateType*arr,int child)
{
	int parent = (child - 1) / 2;
	while (child)
	{
		if (arr[parent] > arr[child])
		{
			swap(&arr[parent], &arr[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else {
			break;
		}
	}
}

void HPPush(HP* php, HPDateType x)
{
	assert(php);
	if (php->capacity == php->size)
	{
		int newcapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		HPDateType* tmp = (HPDateType*)realloc(php->arr, sizeof(HPDateType) * newcapacity);
		if (!tmp)
		{
			perror("realloc fail!");
			exit(1);
		}
		php->arr = tmp;
		php->capacity = newcapacity;
	}
	php->arr[php->size++] = x;//堆分为大堆和小堆，此时不一定符合堆的条件
	AdjustUp(php->arr,php->size-1);
}

void AdJustDown(HPDateType* arr, int parent, int n)
{
	int child = parent * 2 + 1;;

	while (child<n)
	{

		if ((child+1)<n && arr[child] > arr[child + 1])
		{
			child++;
		}
		if (arr[parent] < arr[child])
		{
			break;
		}
		swap(&arr[parent], &arr[child]);
		parent = child;
		child = parent * 2 + 1;
	}
}
void HPPop(HP* php)
{
	assert(php&&php->size);
	swap(&php->arr[0], &php->arr[php->size - 1]);
	--php->size;
	AdJustDown(php->arr,0,php->size-1);
	
}

int HPempty(HP* php)
{
	return php->size;
}

HPDateType HPTop(HP* php)
{
	assert(php&&php->arr);
	return php->arr[0];
}