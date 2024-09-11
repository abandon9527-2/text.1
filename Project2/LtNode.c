#include"LtNode.h"
LTnode* buynode(ListDatetype x)
{
	LTnode* pad = (LTnode*)malloc(sizeof(LTnode));
	if (pad)
	{
		LTnode*ps = pad;
		ps->next = ps;
		ps->prve = ps;
		ps->date = x;
		return ps;
	}
	else
	{
		perror("malloc失败\n");
		exit(1);
	}
}

void LTnodeInit(LTnode**pphead)
{
	*pphead=buynode(-1);
}

void LTnodepushback(LTnode* phead, ListDatetype x)
{
	LTnode* ptail = buynode(x);
	ptail->prve = phead->prve;
	ptail->next = phead;
	phead->prve->next = ptail;
	phead->prve = ptail;
}

void LTnodepushfront(LTnode* phead, ListDatetype x)
{
	LTnode* pfor = buynode(x);
	pfor->next = phead->next;
	pfor->prve = phead;
	phead->next = pfor;
	pfor->next->prve = pfor;
}

void LTPint(LTnode* phead)
{
	LTnode* pcur = phead->next;
	while (pcur!=phead)
	{
		printf("%d", pcur->date);
		pcur = pcur->next;
	}
	printf("\n");
}

int Empty(LTnode* phead)
{
	assert(phead);
	return phead->next == phead;
}

void LTnodepopback(LTnode* phead)
{
	assert(phead);
	assert(!Empty(phead));
	LTnode* pcur = phead->prve;
	phead->prve = pcur->prve;
	pcur->prve->next = phead;
	free(pcur);
	pcur = NULL;

}

void LTnodepopfront(LTnode* phead)
{
	assert(phead);
	assert(!Empty(phead));
	LTnode* pcur = phead->next;
	phead->next = phead->next->next;
	phead->next->prve = phead;
	free(pcur);
	pcur = NULL;
}

LTnode* LTFind(LTnode* phead, ListDatetype x)
{
	assert(phead);
	LTnode* pcut = phead->next;
	while (pcut != phead)
	{
		if (pcut->date == x)
		{
			return pcut;
		}
		pcut = pcut->next;
	}
	return NULL;
}

void Insert(LTnode* pos, ListDatetype x)//在指定位置之后插入x
{
	LTnode* pcur = pos->next;
	LTnode* pfor = buynode(x);
	pos->next = pfor;
	pfor->prve = pos;
	pfor->next = pcur;
	pcur->prve = pfor;
}
void LTDestory(LTnode** pphead)
{
	assert(pphead&&* pphead);
	LTnode* pcur = (*pphead)->next;
	LTnode* next;
	while (pcur!=*pphead)
	{
		next = pcur->next;
		free(pcur);
		pcur = next;
	}
	free(*pphead);
	*pphead = NULL;
}