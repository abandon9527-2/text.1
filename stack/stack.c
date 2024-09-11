#include"stack.h"

void NewCapacity(Stack* ps)
{
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		stackDateType* pv = (stackDateType*)realloc(ps ->arr, newcapacity * sizeof(stackDateType));
		if (pv)
		{
			ps->capacity = newcapacity;
			ps->arr = pv;
		}
		else
		{
			exit(1);
			perror("mallocÊ§°Ü");
		}
	}
}

void StackInit(Stack* ps)
{
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

void StackDestory(Stack* ps)
{
	free(ps->arr);
	ps->arr = NULL;
}

void StackPush(Stack* ps,stackDateType x)
{
	NewCapacity(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}

int StackEmpty(Stack* ps)
{
	return ps->size >0 ? 1 : 0;
}
stackDateType StackPop(Stack* ps)
{
	assert(ps);
	assert(StackEmpty(ps));
	return ps->arr[--ps->size];
}