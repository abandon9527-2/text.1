#include"Seqlist.h"
void newcapacity(SL*ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* temp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (temp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = temp;
			ps->capacity = newcapacity;
		}
	}
}
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
void SeqListPushBack(SL* ps, SLDataType x)
{
	//newcapacity( ps);
	//ps->a[ps->size] = x;
	//ps->size++;
	SeqListInsert(ps, ps->size, x);
}
void SeqListprint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	//newcapacity(ps);
	//int end = ps->size - 1;
	//while(end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	--end;
	//}
	//ps->a[0] = x;
	//ps->size++;
	SeqListInsert(ps, 0, x);
}
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	//int begin = 1;
	//while (begin < ps->size)
	//{
	//	ps->a[begin - 1] = ps->a[begin];
	//	++begin;
	//}
	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}
int  SeqListFind(SL* ps, SLDataType x)
{
	for (int a = 0; a < ps->size - 1; a++)
	{
		if (ps->a[a] == x)
		{
			return a;
		}
	}
	return -1;
}
void SeqListInsert(SL* ps, int pose, SLDataType x)
{
	if (pose > ps->size || pose < 0)
	{
		printf("pose,err\n");
		return;
	}
	newcapacity(ps);
	int end = ps->size - 1;
	while (end >=pose)
	{
		ps->a[end+1] = ps->a[end ];
		end--;
	}
	ps->a[pose] = x;
	ps->size++;
}