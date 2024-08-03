#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SLDateType;
typedef struct SListNode
{
	SLDateType Date;
	struct SListNode* next;
}SLTNode;
void SListprint(SLTNode* phead);
void SListPushBack(SLTNode** phead, SLDateType x);