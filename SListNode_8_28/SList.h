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

//β��
void SLTPushBack(SLTNode** pphead,SLDataType x);

//ͷ��
void SLTPushFront(SLTNode** pphead,SLDataType x);

//βɾ
void SLTPopBack(SLTNode** pphead);

//ͷɾ
void SLTPopFront(SLTNode** pphead);

//�������
SLTNode* SLTFind(SLTNode* phead, SLDataType x);

//��ָ��λ�ò�������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLDataType x);

//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos);

//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos);