#include"Seqlist.h"
void SLInit(SL *ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

void SLdestory(SL* ps)
{
	if(ps->arr)
	free(ps->arr);
	ps->arr = NULL;
}

void NewCapacity(SL*ps)
{
	int newcapacity = ps->capacity == 0 ? 3 : 2 * ps->capacity;
	SLDateType* temp = (SLDateType*)realloc(ps->arr, newcapacity * sizeof(SLDateType));
	if (temp)
	{
		ps->capacity = newcapacity;
		ps->arr = temp;
	}
	else
	{
		printf("error");
		exit(-1);

	}
}
void SLpushFront(SL* ps, SLDateType x)
{
	if(ps->capacity==ps->size)
	NewCapacity(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}
//void Print(SL* ps)
//{
//	for (int mine = 0; mine < ps->size; mine++)
//	{
//		printf("%d", ps->arr[mine]);
//	}
//	printf("\n");
//}
void SLpushLast(SL* ps, SLDateType x)
{
	if (ps->capacity == ps->size)
		NewCapacity(ps);
	for (int mine = ps->size; mine >=0 ; mine--)
	{
		ps->arr[mine ] = ps->arr[mine-1];
	}
	ps->arr[0] = x;
	ps->size++;
}
void SLpopLast(SL* ps)
{
	assert(ps&&ps->size);
	ps->size--;
}
void SLpopFront(SL* ps)
{
	assert(ps&&ps->size);
	for (int mine = 0; mine < ps->size-1; mine++)
	{
		ps->arr[mine] = ps->arr[mine + 1];
	}
	ps->size--;
}
void SLInsert(SL* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos <= ps->size && pos >= 0);
	NewCapacity(ps);
	for (int mine = ps->size; mine >pos; mine--)
	{
		ps->arr[mine] = ps->arr[mine - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}

void SLErase(SL* ps,int pos)
{
	assert(ps && pos < ps->size && pos >= 0);
	for (int main = pos; main < ps->size-1; main++)
	{
		ps->arr[main] = ps->arr[main + 1];
	}
	ps->size--;
}
//int SLFind(SL* ps,SLDateType x)
//{
//	for (int i=0;i<ps->size;i++)
//	{
//		assert(ps);
//		if (ps->arr[i]==x)
//		{
//			printf("ур╣╫ак");
//			return i;
//		}
//	}
//	return -1;
//}