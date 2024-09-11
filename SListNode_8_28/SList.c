#include"SList.h"

void SLTprint(SLTNode* pphead)
{
	while (pphead)
	{
		printf("%d->", pphead->data);
		pphead = pphead->next;
	}
	printf("NULL\n");
}

SLTNode* SLTBuyNode(SLDataType x)
{
	SLTNode* ps = (SLTNode*)malloc(sizeof(SLTNode));
	if (ps)
	{
		ps->data = x;
		ps->next = NULL;
		return ps;
	}
	else
	{
		perror("malloc fail!");
		exit(1);
	}
}

void SLTPushBack(SLTNode** pphead, SLDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead)
	{
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
	else
	{
		*pphead = newnode;
	}

}
void SLTPushFront(SLTNode** pphead, SLDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);
	if ((*pphead)->next)
	{
		SLTNode* ptail = *pphead;
		while (ptail->next->next)
		{
			ptail = ptail->next;
		}
		free(ptail->next);
		ptail->next = NULL;
	}
	else
	{
		free(*pphead);
		*pphead = NULL;
	}
}
void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead && pphead);
	//SLTNode* ps = *pphead;
	//*pphead = (*pphead)->next;
	//free(ps);
	//ps = NULL;

	SLTNode* ps = (*pphead)->next;
	free(*pphead);
	*pphead = ps;

}

SLTNode* SLTFind(SLTNode* phead, SLDataType x)
{
	SLTNode* ps = phead;
	while (ps)
	{
		if (ps->data == x)
		{
			return ps;
		}
		ps = ps->next;
	}
	return NULL;
}

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x)
{
	assert(pphead && *pphead&&pos);
	SLTNode* ps = *pphead;
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == pos)
	{
		newnode->next = pos;
		*pphead = newnode;
	}
	else
	{
		while (ps || ps->next != pos)
		{
			ps = ps->next;
		}
		if (ps)
		{
			//SLTNode* pd = ps->next;
			//ps->next = newnode;
			//newnode->next = pd;
			newnode->next = pos;
			ps->next = newnode;
		}
	}
}

void SLTInserAfter(SLTNode* pos, SLDataType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pos && pphead && *pphead);
	SLTNode* ps = *pphead;
	if (strcmp(*pphead, pos) == 0)
	{
		*pphead = (*pphead)->next;
		free(ps);
		ps = NULL;
	}
	else
	{
		while (strcmp(ps->next, pos) || ps)
		{
			ps = ps->next;
		}
		if (ps)
		{
			//SLTNode* pd = ps->next;
			ps->next = pos->next;
			free(pos);
			pos = NULL;
		}
	}
}

void SLTEraseAfter(SLTNode* pos)
{
	assert(pos&&pos->next);
	SLTNode* ps = pos->next;
	pos->next = pos->next->next;
	free(ps);
	ps = NULL;
}

void SLTNDestory(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	pphead = NULL;
}