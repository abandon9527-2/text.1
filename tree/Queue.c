#include"Queue.h"

int ifempty(Queue* ps)
{
	return ps->head==NULL && ps->ptail == NULL;
}

void QueueInit(Queue* ps)
{
	assert(ps);
	ps->head=ps->ptail = NULL;
}

void QueuePush(Queue* ps, QNDatetype x)
{
	assert(ps);
	QueueNode* pcur = (QueueNode*)malloc(sizeof(QueueNode));
	if (pcur == NULL)
	{
		perror("malloc fairl");
		exit(1);
	}
	pcur->x = x;
	pcur->next = NULL;
	if (ps->head == NULL)
	{
		ps->head=ps->ptail = pcur;
	}
	else
	{
		ps->ptail->next = pcur;
		ps->ptail = ps->ptail->next;
	}
}

void QueuePop(Queue* ps)
{
	assert(ps);
	assert(!ifempty(ps));
	if (ps->head == ps->ptail)
	{
		free(ps->head);
		ps->head = ps->ptail = NULL;
	}
	else
	{
		QueueNode* temp = ps->head;
		ps->head = ps->head->next;
		free(temp);
		temp = NULL;
	}
}

void QueueDestory(Queue* ps)
{
	assert(ps);
	//assert(!ifempty(ps));
	QueueNode* temp;
	while (ps->head)
	{
		temp = ps->head;
		ps->head = ps->head->next;
		free(temp);
		temp = NULL;
	}
	ps->ptail = NULL;
}
QNDatetype QueueTop(Queue* ps)
{
	return ps->head->x;
}