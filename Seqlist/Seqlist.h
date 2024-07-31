#pragma once
typedef int SLDataType;
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Seqlist
{
	SLDataType*a;
	int size;//链表中的有效存储的数据
	int capacity;
}SL;

void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListDestory(SL* ps);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
int SeqListFind(SL* ps, SLDataType x);
void SeqListInsert(SL* ps, int pose, SLDataType x);