#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SLTNode;

void SLTprint(SLTNode* pphead);

//尾插
void SLTPushBack(SLTNode** pphead,SLDataType x);

//头插
void SLTPushFront(SLTNode** pphead,SLDataType x);

//尾删
void SLTPopBack(SLTNode** pphead);

//头删
void SLTPopFront(SLTNode** pphead);

//链表查找
SLTNode* SLTFind(SLTNode* phead, SLDataType x);

//在指定位置插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x);

//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos);

//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);