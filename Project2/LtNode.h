#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int ListDatetype;
typedef struct Listnode
{
	ListDatetype date;
	struct Listnode* next;
	struct Listnode* prve;
}LTnode;

void LTnodeInit(LTnode** pphead);

void LTnodepushback(LTnode* phead, ListDatetype x);//β��

void LTnodepushfront(LTnode* phead, ListDatetype x);//ͷ��

void LTnodepopback(LTnode* phead);//βɾ

void LTnodepopfront(LTnode* phead);//ͷɾ

void LTPint(LTnode* phead);

LTnode* LTFind(LTnode* phead,ListDatetype x);

void Insert(LTnode* pos, ListDatetype x);//��ָ��λ��֮�����x

void LTDestory(LTnode* *pphed);