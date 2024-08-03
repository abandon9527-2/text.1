#include"SListNode.h"
void SListprint(SLTNode* phead)
{
	SLTNode* cul = phead;
	while (cul != NULL)
	{
		printf("%d ", cul->Date);
		cul = cul->next;
	}
}
void SListPushBack(SLTNode** phead, SLDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->Date = x;
	newnode->next = NULL;
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		SLTNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
		//newnode->Date = x;
		//newnode->next = NULL;
		tail->next = newnode;

	}
}